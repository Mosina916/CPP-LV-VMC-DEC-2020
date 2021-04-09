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


int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}
void mirror(node*root){
	if(root==NULL){
		return;
	}
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);

}

int diameter(node*root){
	if(root==NULL){
		return 0;
	}
	// if dia is passing throught left subtree

	int op1=diameter(root->left);

	// if dia is passing throught right subtree

	int op2=diameter(root->right);

	// if dia is passing throught root node 

	int op3=height(root->left)+height(root->right);

	return max(op1,max(op2,op3));


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

bool searchinbst(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}



	// recursive case

	if(key==root->data){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);
	}
}

void printrange(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	printrange(root->left,k1,k2);
	if(root->data>=k1&&root->data<=k2){
		cout<<root->data<<" ";
	}
	printrange(root->right,k1,k2);
}


bool isbst(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case


	if(root==NULL){
		return true;
	}

	// recursive case
	if((root->data>=min&&root->data<=max)&&isbst(root->left,min,root->data)&&isbst(root->right,root->data,max)){
		return true;
	}
	return false;




}


class Pair{
public:
	int height;
	bool balanced;
	// constructor
	Pair(){
		height=0;
		balanced=true;
	}

};
Pair isbalanced(node*root){

	Pair p;
	// base case
	if(root==NULL){
		return p;

	}



	// recursive case
	Pair left=isbalanced(root->left);
	Pair right=isbalanced(root->right);
	p.height=max(left.height,right.height)+1;
	if(left.balanced&&right.balanced&&(abs(left.height-right.height)<=1)){
		p.balanced=true;
	}
	else{
		p.balanced=false;
	}
	return p;



}



int main(){


	// node*root=Buildtree();


	// cout<<"Diameter of tree is "<<diameter(root)<<endl;

	// Pair x=fastdiameter(root);

	// cout<<"Diameter of tree is "<<x.dia<<endl;
	// cout<<"height of tree is "<<x.height<<endl;


	// // node *root=buildtreelevelwise();

	// cout<<"preorder"<<endl;
	// preorder(root);
	// cout<<endl;

	// cout<<"inorder"<<endl;
	// inorder(root);
	// cout<<endl;
	// cout<<"postorder"<<endl;
	// postorder(root);
	// cout<<endl;

	// printlevel(root);

	// int n=sizeof(in)/sizeof(int);


	// node*root=createtree(0,n-1);


	// cout<<endl;
	// cout<<"preorder"<<endl;
	// preorder(root);
	// cout<<endl;

	// cout<<"inorder"<<endl;
	// inorder(root);
	// cout<<endl;
	// cout<<"postorder"<<endl;
	// postorder(root);
	// cout<<endl;

	// printlevel(root);


	node*root=buildbst();
	// cout<<"preorder"<<endl;
	// preorder(root);
	// cout<<endl;

	// cout<<"inorder"<<endl;
	// inorder(root);
	// cout<<endl;
	// cout<<"postorder"<<endl;
	// postorder(root);
	// cout<<endl;

	printlevel(root);

	// int key;
	// cin>>key;


	// if(searchinbst(root,key)){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }


	// printrange(root,3,13);
	// cout<<endl;

	// if(isbst(root)){

	// 	cout<<"yes it is bst"<<endl;
	// }
	// else{
	// 	cout<<"no it is bst"<<endl;
	// }


	Pair x=isbalanced(root);


	if(x.balanced==true){

		cout<<"yes it is balanced with height "<<x.height<<endl;
	}
	else{
		cout<<"no it is not balanced"<<endl;
	}











	return 0;
}