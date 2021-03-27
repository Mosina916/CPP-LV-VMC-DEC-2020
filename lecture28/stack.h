#include"node.h"
using namespace std;
template<typename T>
class Stack{
private:
	node<T>*head;
	int len;
	
public:
	//constructor
	Stack(){
		head=NULL;
		len=0;
	}
	// void push(int d){
	void push(T d){
		node<T>*n=new node<T>(d);
		n->next=head;
		head=n;
		len++;

	}

	void pop(){
		if(head==NULL){ //empty
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=NULL;
			len--;
		}
		else{
			node<T>*temp=head;
			head=head->next;
			delete temp;
			len--;
		}


	}
	bool empty(){
		return head==NULL;
	}
	int size(){
		return len;

	}
	T top(){
		return head->data;
	}


};