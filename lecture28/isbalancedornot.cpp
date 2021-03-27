#include<iostream>
#include<stack>
using namespace std;

bool isbalanced(char *arr){
	stack<char> s;
	for (int i = 0; arr[i]!='\0'; ++i)
	{
		char ch=arr[i];
		switch(ch){
			case '(':
			case '{':
			case '[': s.push(ch);
					  break;


			case ')':
					if(!s.empty()&&s.top()=='('){
						s.pop();
					}
					else{
						return false;
					}
					break;

			case '}':
					if(!s.empty()&&s.top()=='{'){
						s.pop();
					}
					else{
						return false;
					}
					break;
			case ']':
					if(!s.empty()&&s.top()=='['){
						s.pop();
					}
					else{
						return false;
					}

		}
	}
	if(s.empty()){
		return true;
	}
	return false;



}

int main(){
	char arr[]="{(a+b)+c*(d+e)]";

	if(isbalanced(arr)){
		cout<<"balanced expression"<<endl;
	}
	else{
		cout<<"not balanced expression"<<endl;
	}





	return 0;




}