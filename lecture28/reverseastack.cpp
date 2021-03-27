#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int te){
	if(s.empty()){
		s.push(te);
		return;
	}
	int top=s.top();
	s.pop();
	insertatbottom(s,te);
	s.push(top);
}
void reversestack(stack<int> &s){
	// base case
	if(s.empty()){
		return;
	}


	// recursive case
	int te=s.top();
	s.pop();
	reversestack(s);
	insertatbottom(s,te);

}
void print(stack<int>s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;

}


int main(){

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(4);
	print(s);

	reversestack(s);
	print(s);

	
	
	return 0;
}