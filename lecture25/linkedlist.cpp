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
		for(int i=1;i<=pos-1;i++){// 1,2-->pos3
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


int main(){
	// node n1(3);
	// node n2(4);
	// n1.next=&n2;
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
		// cout<<n1.data<<" "<<n1.next->data<<endl;

	node*head=NULL,*tail=NULL; //NULL
	insertatfront(head,tail,1); //1
	insertatfront(head,tail,2);// 2->1
	insertatfront(head,tail,3);//3->2->1
	insertatfront(head,tail,4);//4->3->2->1
	insertatfront(head,tail,5);//5->4->3->2->1

	printll(head);
	// insertatfront(head,tail,1); //1
	// insertatfront(head,tail,2);// 2->1
	// insertatfront(head,tail,3);//3->2->1
	// insertatfront(head,tail,4);//4->3->2->1
	// insertatfront(head,tail,5);//5->4->3->2->1
	// printll(head);
	insertattail(head,tail,6);//5->4->3->2->1->6
	insertattail(head,tail,7);//5->4->3->2->1->6->7
	insertattail(head,tail,8);//5->4->3->2->1->6->7->8
	printll(head);
	cout<<"length of ll is "<<length(head)<<endl;
	insertatanyposition(head,tail,70,2);
	printll(head);
	cout<<"length of ll is "<<length(head)<<endl;
	cout<<"length of ll by recursion is "<<lengthrec(head)<<endl;


	





	return 0;
}