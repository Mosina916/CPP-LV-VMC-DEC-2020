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

// 2 3 5 -->a
// 1 4 6 7 -->b
// 2 3 4 5 6 7
node* merge(node*a,node*b){

	// base case

	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}



	 //recursion


	node*newhead;
	if(a->data<b->data){
		newhead=a;
		node*c=merge(a->next,b);
		newhead->next=c;


	}
	else{
		newhead=b;
		node*d=merge(a,b->next);
		newhead->next=d;


	}
	return newhead;
}


node* mergersort(node*head){

	//recursive case
	if(head==NULL||head->next==NULL){
		return head;

	}

	//1 divide
	node*m=mid(head);
	node*b=head;
	node*c=m->next;
	m->next=NULL;


	// 2 sort
	b=mergersort(b);
	c=mergersort(c);


	// merge
	node*fhead=merge(b,c);
	return fhead;
}


bool iscyclic(node*head){
	node*fast=head;
	node*slow=head;
	while(fast!=NULL&&fast->next!=NULL){ //linear
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;

		}

	}
	return false;
}


void createcycle(node*head){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head->next->next;
}

// void createcycle(node*head,node*&tail){

// 	tail->next=head->next->next;
// }


void breakcycle(node*head){
	node*fast=head;
	node*slow=head;
	while(fast!=NULL&&fast->next!=NULL){ //linear
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;

		}

	}
	
	node*prev=head;
	while(prev->next!=fast){
		prev=prev->next;
	}
	slow=head;
	while(slow!=fast){
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}
	prev->next=NULL;



}









int main(){
	// node n1(3);
	// node n2(4);
	// n1.next=&n2;
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
		// cout<<n1.data<<" "<<n1.next->data<<endl;

	node*head=NULL,*tail=NULL; //NULL
	// insertatfront(head,tail,1); //1
	// insertatfront(head,tail,20);// 20->1
	// insertatfront(head,tail,3);//3->20->1
	// insertatfront(head,tail,4);//4->3->20->1
	// insertatfront(head,tail,5);//5->4->3->20->1

	// printll(head);
	// // insertatfront(head,tail,1); //1
	// // insertatfront(head,tail,2);// 20->1
	// // insertatfront(head,tail,3);//3->20->1
	// // insertatfront(head,tail,4);//4->3->20->1
	// // insertatfront(head,tail,5);//5->4->3->20->1
	// // printll(head);
	// insertattail(head,tail,6);//5->4->3->20->1->6
	// insertattail(head,tail,7);//5->4->3->20->1->6->7
	// insertattail(head,tail,8);//5->4->3->20->1->6->7->8
	// printll(head);


	// deleteatanyposition(head,tail,4);

	// insertattail(head,tail,40);
	// printll(head);///5->4->3->20->6->7->8->40

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


	// node*m=mid(head);
	// if(m==NULL){
	// 	cout<<"mid not present  "<<endl;
	// }
	// else{
	// 	cout<<"value of node at mid is "<<m->data<<endl;
	// }


	// reversell(head);
	// cout<<"ll after reverse"<<endl;

	// printll(head);



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



	// insertatfront(head,tail,6);
	// insertatfront(head,tail,5);
	// insertatfront(head,tail,4);
	// insertatfront(head,tail,3);
	// insertatfront(head,tail,2);
	// insertatfront(head,tail,1);
	// printll(head);


// node*head2=NULL,*tail2=NULL;
// 	insertatfront(head2,tail2,15);
// 	insertatfront(head2,tail2,9);
// 	insertatfront(head2,tail2,8);
// 	printll(head2);


// 	node*finalhead=merge(head,head2);
// 	printll(finalhead);


	// insertatfront(head,tail,5);
	// insertatfront(head,tail,42);
	// insertatfront(head,tail,90);
	// insertatfront(head,tail,21);
	// insertatfront(head,tail,1);
	// printll(head);
	// mergersort(head);
	// printll(head);


	insertattail(head,tail,1);
	insertattail(head,tail,2);
	insertattail(head,tail,3);
	insertattail(head,tail,4);
	insertattail(head,tail,5);
	insertattail(head,tail,6);
	insertattail(head,tail,7);
	insertattail(head,tail,8);
	printll(head);

	if(iscyclic(head)){
		cout<<"yes this is cyclic ll"<<endl;
	}
	else{
		cout<<"this is not cyclic ll"<<endl;
	}

	createcycle(head);




	if(iscyclic(head)){
		cout<<"yes this is cyclic ll"<<endl;
	}
	else{
		cout<<"this is not cyclic ll"<<endl;
	}

	breakcycle(head);

	printll(head);

	// printll(head);




	return 0;
}