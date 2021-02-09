#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	// if(ch=='A'){
	// 	cout<<"value of a is "<<ch<<endl;
	// }
	// else if(ch=='B'){
	// 	cout<<"value of b is "<<ch<<endl;
	// }
	// else if(ch=='C'){
	// 	cout<<"value of c is "<<ch<<endl;
	// }
	// else if(ch=='D'){
	// 	cout<<"value of d is "<<ch<<endl;
	// }
	// else if(ch=='E'){
	// 	cout<<"value of e is "<<ch<<endl;
	// }
	// else if(ch=='F'){
	// 	cout<<"value of f is "<<ch<<endl;
	// }
	// else{
	// 	cout<<"invalid "<<ch<<endl;

	// }


	switch(ch){
		case 'A': cout<<"value of a is "<<ch<<endl;
				break;
		case 'B': cout<<"value of b is "<<ch<<endl;
				break;
		case 'C': cout<<"value of c is "<<ch<<endl;
				break;
		case 'D': cout<<"value of d is "<<ch<<endl;
				break;
		case 'E': cout<<"value of e is "<<ch<<endl;
				break;
		case 'F': cout<<"value of f is "<<ch<<endl;
				break;
		// default: cout<<"invalid "<<ch<<endl;



	}


	return 0;
}