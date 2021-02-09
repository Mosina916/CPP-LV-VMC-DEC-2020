#include<iostream>
#include <algorithm>
using namespace std;

bool my(int a,int b){


	cout<<"the value of a is "<<a<<endl;
	cout<<"the value of b is "<<b<<endl;
	// return a<b; //increasing
	return a>b; //decreasing 
}
int main(){
	int a[]={4,2,67,83,24,12};
	int n=sizeof(a)/sizeof(int);
	cout<<"before sorting : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	// sort(a,a+n); //by default sorts in acending order

	sort(a,a+n,my); //comperator



	cout<<"After sorting : ";

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	return 0;
}