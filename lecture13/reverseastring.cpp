#include <iostream>
using namespace std;

// int length(char a[])
int length(char a[]){
	int i=0;
	int co=0;
	while(a[i]!='\0'){
		co++;
		i++;
	}

	return co;
}


void reverse(char*a){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}


int main()
{
	char a[100];
	cin>>a;
	cout<<"Before reversing "<<a<<endl;
	reverse(a);

	cout<<"After reversing "<<a<<endl;







	return 0;
}