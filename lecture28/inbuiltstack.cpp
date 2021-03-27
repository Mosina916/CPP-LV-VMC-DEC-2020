#include<iostream>
#include<stack>
using namespace std;
int main(){
	//syntax   -->stack<datatype> name;


	// stack<int> s;


	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);


	stack<char> s;
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
