#include<iostream>
#include <algorithm>
using namespace std;

void printarray(int arr[],int x){
	cout<<"inside print function"<<endl;

	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}


int main(){
	// input manually
	int a[]={1,2,6,4,5,3,9,40};
	int n=sizeof(a)/sizeof(int);
	cout<<"before sorting :"<<endl;
	printarray(a,n);

	sort(a,a+n);

	cout<<"After sorting :"<<endl;
	printarray(a,n);



	

	return 0;
}