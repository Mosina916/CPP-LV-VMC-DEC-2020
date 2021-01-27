#include<iostream>
using namespace std;
int main(){

	// int count=0;
	// char ch;
	// cin>>ch;
	// while(ch!='$'){
	// 	count++;
	// 	cin>>ch;

	// }
	// cout<<"The count of characters till $ is "<<count<<endl;

	int count=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		count++;
		ch=cin.get();

	}
	cout<<"The count of characters till $ is "<<count<<endl;


	return 0;
}