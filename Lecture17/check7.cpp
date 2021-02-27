#include<iostream>
using namespace std;

bool is7present(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}


	// Recursive case
	if(arr[0]==7){
		return true;
	}
	return is7present(arr+1,n-1);
}

int first7(int *arr,int n,int i){
	// base case
	if(i==n){
		return -1;
	}


	// Recursive case

	if(arr[i]==7){
		return i;
	}
	return first7(arr,n,i+1);

}
void allindices(int *arr,int n,int i){
	// base case
	if(i==n){
		return;
	}


	// Recursive case

	if(arr[i]==7){
		cout<<i<<" ";
	}
	allindices(arr,n,i+1);

}




int main(){
	int arr[]={1,2,6,9,9,7,3,5,7,9};
	int n=sizeof(arr)/sizeof(int);

	bool x=is7present(arr,n);

	if(x){
		cout<<"True 7 is present"<<endl;

	}
	else{
		cout<<"True 7 is not present"<<endl;

	}

	cout<<first7(arr,n,0)<<endl;

	allindices(arr,n,0);





	return 0;
}