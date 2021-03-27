#include<iostream>
#include<vector>
using namespace std;
class Stack{

	vector<int>v;
	
public:
	
	int top(){
		return v[v.size()-1];
	}
	void push(int data){
		v.push_back(data);
	}
	void pop(){
		v.pop_back();
	}
	int size(){
		return v.size();
	}
	bool empty(){
		return v.size()==0;

	}


};
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;

	


	return 0;




}