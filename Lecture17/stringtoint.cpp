#include<iostream>
using namespace std;

int stringtoint(char *a,int n){
	// base case
	if(n==0){
		return 0;
	}


	// recursive case
	int digit=a[n-1]-'0';
	return stringtoint(a,n-1)*10+digit;
}



int main(){

	char arr[100];
	cin>>arr; //"54123" -->o/p 54123+100
	int l=strlen(arr); //length -->5
	int x=stringtoint(arr,l);
	int y=x+100;

	cout<<x<<endl;
	cout<<y<<endl;




	return 0;
}