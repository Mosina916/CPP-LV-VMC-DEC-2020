#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	// node constructor


	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};


node*Buildtree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node*root=new node(data);
		root->left=Buildtree(); //lst
		root->right=Buildtree(); //rst

		return root;


	}
}

void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	// root lst rst
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	// lst root rst

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	// lst root rst

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}


int countnode(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	return countnode(root->left)+countnode(root->right)+1;
}

int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case

	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;

}


node* buildtreelevelwise(){
	node*root=NULL;
	int data;

	cout<<"enter the data of root"<<endl;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	root=new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* x=q.front();
		q.pop();
		cout<<"enter the data of children of "<<x->data<<endl;
		int leftchild,rightchild;
		cin>>leftchild>>rightchild;
		if(leftchild!=-1){
			x->left=new node(leftchild);
			q.push(x->left);
		}
		if(rightchild!=-1){
			x->right=new node(rightchild);
			q.push(x->right);
		}
	}
	return root;

}


void printlevel(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
		q.pop();
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);

			}

		}
		else{
			cout<<x->data<<" ";
			if(x->left!=NULL){
				q.push(x->left);


			}
			if(x->right!=NULL){
				q.push(x->right);

			}
			
		}
	}
}




node* insertinbst(node*root,int data){
	// base case
	if(root==NULL){
		root=new node(data);
		return root;
	}

	// recurursive case
	if(data<=root->data){
		root->left=insertinbst(root->left,data);

	}
	else{
		root->right=insertinbst(root->right,data);
	}
	return root;
}


node* buildbst(){
	node*root=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root=insertinbst(root,data);
		cin>>data;


	}
	return root;
}



// bst to sorted ll
class linkedlist{
public:
	node*head;
	node*tail;
	// constructor
	linkedlist(){
		head=NULL;
		tail=NULL;
	}

};

linkedlist bsttoll(node*root){
	linkedlist l;
	// base case
	if(root==NULL){
		return l;
	}


	// recursive case


	// case 1 //no children
	if(root->left==NULL&&root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;
	}
	// case 2 //only left subtree is present
	else if(root->left!=NULL&&root->right==NULL){
		linkedlist left=bsttoll(root->left);
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		// return l;
	}
	// case 2 //only right subtree is present
	else if(root->left==NULL&&root->right!=NULL){
		linkedlist Right=bsttoll(root->right);
		root->right=Right.head;
		l.head=root;
		l.tail=Right.tail;
		// return l;
	}
	//case 4 //both subtrees are present
	else{
		linkedlist left=bsttoll(root->left);
		linkedlist Right=bsttoll(root->right);
		left.tail->right=root;
		root->right=Right.head;
		l.head=left.head;
		l.tail=Right.tail;
		// return l;


	}
	return l;

}


node* createbstusingarr(int *arr,int s,int e){
	// base case
	if(s>e){
		return NULL;
	}


	// recursive case
	int mid=(s+e)/2;
	node* root=new node(arr[mid]);
	root->left=createbstusingarr(arr,s,mid-1);
	root->right=createbstusingarr(arr,mid+1,e);
	return root;
}
void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->right;
	}
	cout<<"NULL"<<endl;

}


node *deleteinbst(node*root,int key){
	// case 1 --> key lst
	if(root->data>key){
		root->left=deleteinbst(root->left,key);
		return root;
	}
	// case 1 --> key Rst
	else if(root->data<key){
		root->right=deleteinbst(root->right,key);
		return root;
	}
	else{
		// no child

		if(root->left==NULL&&root->right==NULL){
			delete root;
			return NULL;
		}


		//one child
		// case1 rc exist
		else if(root->right!=NULL&&root->left==NULL){
			node*temp=root->right;
			delete root;
			return temp;
		}
		// case1 lc exist
		else if(root->right==NULL&&root->left!=NULL){
			node*temp=root->left;
			delete root;
			return temp;
		}



		// two child;
		else{
			node*replace=root->right;
			while(replace->left!=NULL){
				replace=replace->left;
			}
			swap(root->data,replace->data);
			root->right=deleteinbst(root->right,replace->data);
			return root;

		}
	}
}

void rightview(node*root,int level,int &maxlevel){

// base case
	if(root==NULL){
		return;
	}



	// recursive case
	if(level>maxlevel){
		cout<<root->data<<" ";
		maxlevel=level; 
	}
	rightview(root->right,level+1,maxlevel); //l 5//ml4
	rightview(root->left,level+1,maxlevel);




}

void leftview(node*root,int level,int &maxlevel){

// base case
	if(root==NULL){
		return;
	}

	// recursive case
	if(level>maxlevel){
		cout<<root->data<<" ";
		maxlevel=level; 
	}
	leftview(root->left,level+1,maxlevel);
	leftview(root->right,level+1,maxlevel); //l 5//ml4
	




}






int main(){



	node*root=buildbst();
	cout<<"Before deleting"<<endl;
	printlevel(root);

	// linkedlist l=bsttoll(root);
	// printll(l.head);

	// int arr[]={1,2,3,4,8,9,10,11};
	// int n=sizeof(arr)/sizeof(int);


	// node*root2=createbstusingarr(arr,0,n-1);

	// printlevel(root2);

	// deleteinbst(root,3);

	// cout<<"after deleting"<<endl;
	// printlevel(root);


	// int key;
	// cin>>key;

	int maxlevel=0;

	rightview(root,1,maxlevel);
	cout<<endl;
	maxlevel=0;
	leftview(root,1,maxlevel);
	cout<<endl;






	return 0;
}