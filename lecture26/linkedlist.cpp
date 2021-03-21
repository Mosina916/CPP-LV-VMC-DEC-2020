#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	// constructor 1st way
	node(int d){
		data=d;
		next=NULL;
	}
	// // constructor 2nd way
	// node(int d):data(d),next(NULL){
		
	// }
	
};
void insertatfront(node*&head,node*&tail,int data){
	node*n=new node(data);

//head ,tail-->NULL
	if(head==NULL){ //agar abhi tak ll bana hi nahi
		head=n;
		tail=n;

	}
	else{
	n->next=head;
	head=n;

	}

	

}

void insertattail(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){ //agar abhi tak ll bana hi nahi
		head=n;
		tail=n;

	}
	else{
	tail->next=n;
	tail=n;

	}
	



}
// iterativeway
int length(node*head){
	int cnt=0;
	while(head!=NULL){
		cnt++;
		head=head->next;
	}
	return cnt;
}
// recursive way
int lengthrec(node*head){
	if(head==NULL){
		return 0;
	}
	return 1+lengthrec(head->next);
}
void insertatanyposition(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertatfront(head,tail,data);
	}
	else if(pos>=length(head)){
		insertattail(head,tail,data);

	}
	else{
		node*temp=head;
		node*n=new node(data);
		for(int i=1;i<=1;i++){// 
			temp=temp->next;

		}
		n->next=temp->next;
		temp->next=n;

	}


}


void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;

	}
	cout<<endl;

}



// Deletion


void deleteatfront(node*&head,node*&tail){
	if(head==NULL){ //if ll is empty
		return;
	}
	else if(head->next==NULL){ //if we have only one node in ll
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		node*n=head;
		head=head->next;
		delete n;
	}
}

void deleteatend(node*&head,node*&tail){
	if(head==NULL){ //if ll is empty
		return;
	}
	else if(head->next==NULL){ //if we have only one node in ll
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;
	}

}


void deleteatanyposition(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=length(head)-1){
		deleteatend(head,tail);
	}
	else{
		node*temp=head;
		for (int i = 1; i <=pos-1; ++i)
		{
			temp=temp->next;
		}
		node*n=temp->next;
		temp->next=n->next;
		delete n;
	}
}


node* searchiteratively(node*head,node*tail,int key){
	while(head!=NULL){
		if(head->data==key){
			return head;
		}
		head=head->next;
	}
	return NULL;

}

node* searchrecursively(node*head,node*tail,int key){
	// base case
	if(head==NULL){
		return NULL;
	}
	if(head->data==key){
		return head;
	}

	// Recursive case
	return searchrecursively(head->next,tail,key);
}


node* mid(node*head){
	if(head==NULL){
		return head;
	}

	node*slow=head; 

	node*fast=head->next; 
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

void reversell(node*&head){
	// node*temp=head;

	node*c=head;
	node *prev=NULL;
	node*n=NULL;
	// while(c!=NULL)
		while(c){
			n=c->next;
			c->next=prev;
			prev=c;
			c=n;

		}
		head=prev;

}











int main(){
	// node n1(3);
	// node n2(4);
	// n1.next=&n2;
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
		// cout<<n1.data<<" "<<n1.next->data<<endl;

	node*head=NULL,*tail=NULL; //NULL
	insertatfront(head,tail,1); //1
	insertatfront(head,tail,20);// 20->1
	insertatfront(head,tail,3);//3->20->1
	insertatfront(head,tail,4);//4->3->20->1
	insertatfront(head,tail,5);//5->4->3->20->1

	printll(head);
	// insertatfront(head,tail,1); //1
	// insertatfront(head,tail,2);// 20->1
	// insertatfront(head,tail,3);//3->20->1
	// insertatfront(head,tail,4);//4->3->20->1
	// insertatfront(head,tail,5);//5->4->3->20->1
	// printll(head);
	insertattail(head,tail,6);//5->4->3->20->1->6
	insertattail(head,tail,7);//5->4->3->20->1->6->7
	insertattail(head,tail,8);//5->4->3->20->1->6->7->8
	printll(head);


	deleteatanyposition(head,tail,4);

	insertattail(head,tail,40);
	printll(head);///5->4->3->20->6->7->8->40

	// node*x=searchiteratively(head,tail,9);
	// if(x==NULL){
	// 	cout<<"key not found "<<endl;
	// }
	// else{
	// 	cout<<"value of node is "<<x->data<<endl;
	// }

	// node*y=searchrecursively(head,tail,19);
	// if(y==NULL){
	// 	cout<<"key not found "<<endl;
	// }
	// else{
	// 	cout<<"value of node is "<<y->data<<endl;
	// }


	node*m=mid(head);
	if(m==NULL){
		cout<<"mid not present  "<<endl;
	}
	else{
		cout<<"value of node at mid is "<<m->data<<endl;
	}


	reversell(head);
	cout<<"ll after reverse"<<endl;

	printll(head);












	// cout<<"length of ll is "<<length(head)<<endl;
	// insertatanyposition(head,tail,70,2);
	// printll(head);
	// cout<<"length of ll is "<<length(head)<<endl;
	// cout<<"length of ll by recursion is "<<lengthrec(head)<<endl;


	// deleteatfront(head,tail);
	// deleteatfront(head,tail);
	// deleteatfront(head,tail);
	// cout<<"after deleting at front"<<endl;
	// printll(head);//2->1->6->7->8

	// deleteatend(head,tail);
	// printll(head);//2->1->6->7





	





	return 0;
}