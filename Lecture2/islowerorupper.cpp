#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	char ch;
	cin>>ch;
	// int x=ch;

// 1 sol



	// if(x>=65&&x<=90){
	// 	cout<<"uppercase"<<endl;
		
	// }
	// else if(x>=97&&x<=122){
	// 	cout<<"lowercase"<<endl;


	// }
	// else{
	// 	cout<<"invalid character"<<endl;
	// }


	// if(x>='A'&&x<='Z'){
	// 	cout<<"uppercase"<<endl;

	// }
	// else if(x>='a'&&x<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<endl;

	// }


	if(ch>='A'&&ch<='Z'){
		cout<<"uppercase"<<endl;

	}
	else if(ch>='a'&&ch<='z'){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid character"<<endl;

	}
	return 0;


}