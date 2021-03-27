#include<iostream>
using namespace std;
class node{
public:
	// int data;
	char data;
	node*next;
	//constructor
	// node(int d){
	node(char d){
		data=d;
		next=NULL;

	}
};
class Stack{
private:
	node*head;
	int len;
	
public:
	//constructor
	Stack(){
		head=NULL;
		len=0;
	}
	// void push(int d){
	void push(char d){
		node*n=new node(d);
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
			node*temp=head;
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
	char top(){
		return head->data;
	}


};
int main(){
	Stack s;
	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;



	return 0;
}
