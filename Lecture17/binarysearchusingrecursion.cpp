#include<iostream>
using namespace std;

int binarysearchrecursion(int *arr,int key,int s,int e){
	// base case
	if(s>e){
		return -1;

	}
	// recursive case

	int mid=(s+e)/2;
	if(arr[mid]>key){
		return binarysearchrecursion(arr,key,s,mid-1);

	}
	else if(arr[mid]==key){
		return mid;
	}
	else{
		return binarysearchrecursion(arr,key,mid+1,e);

	}


	
}



int main(){

	int arr[100];
	cout<<"enter the number of elements:"<<endl;

	int n;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binarysearchrecursion(arr,key,0,n-1)<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	
	



	return 0;
}