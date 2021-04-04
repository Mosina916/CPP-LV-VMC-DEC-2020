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




class Pair{
public:
	int dia;
	int height;
};

Pair fastdiameter(node*root){
	Pair p;

	// base case
	if(root==NULL){
		p.height=0;
		p.dia=0;
		return p;

	}

	// recursive case

	Pair left=fastdiameter(root->left); //left(ls)-->(height,diamter)

	Pair right=fastdiameter(root->right); //right(rs)-->(height,diamter)

	p.height=max(left.height,right.height)+1;


	int op1=left.height+right.height;
	int op2=left.dia;
	int op3=right.dia;
	p.dia=max(op1,max(op2,op3));



	return p;


}



int main(){


	// node*root=Buildtree();


	// cout<<"Diameter of tree is "<<diameter(root)<<endl;

	// Pair x=fastdiameter(root);

	// cout<<"Diameter of tree is "<<x.dia<<endl;
	// cout<<"height of tree is "<<x.height<<endl;


	node *root=buildtreelevelwise();

	printlevel(root);





	return 0;
}