#include<iostream>
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

int main(){


	node*root=Buildtree();


	cout<<"preorder print"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"inorder print"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"postorder print"<<endl;
	postorder(root);
	cout<<endl;

	cout<<"the total nodes are "<<countnode(root)<<endl;
	cout<<"the height of tree is "<<height(root)<<endl;

	cout<<"the sum of nodes of tree is "<<sumofnodes(root)<<endl;

	// mirror(root);
	// cout<<"preorder print"<<endl;
	// preorder(root);
	// cout<<endl;
	// cout<<"inorder print"<<endl;
	// inorder(root);
	// cout<<endl;
	// cout<<"postorder print"<<endl;
	// postorder(root);
	// cout<<endl;


	cout<<"Diameter of tree is "<<diameter(root)<<endl;












	return 0;
}