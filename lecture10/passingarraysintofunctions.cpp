#include<iostream>
using namespace std;

// void printarray(int a[],int x){
void printarray(int arr[10000],int x){
	cout<<"inside print function"<<endl;

	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}

void update(int a[10000],int n){
	for(int i=0;i<n;i++){
		a[i]=a[i]+1;
	}


}

int main(){
	// int a[]={1,2,6,4,5,3,9,40};
	// int n=sizeof(a)/sizeof(int);
	// cout<<"inside main function"<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

//input from user
	int arr[10],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}

	cout<<"array Before updation"<<endl;
	printarray(arr,n); 

	update(arr,n);

	cout<<"array after updation"<<endl;

	printarray(arr,n);

	

	return 0;
}