#include<iostream>
#include<vector>
using namespace std;
template<typename U>
class Stack{

	vector<U>v;
	
public:
	
	U top(){
		return v[v.size()-1];
	}
	void push(U data){
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
	// Stack<int>s;
	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);
	Stack<char>s;
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