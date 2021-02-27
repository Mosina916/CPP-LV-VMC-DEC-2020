#include<iostream>
using namespace std;

void bubblesortrecursion(int*arr,int n,int i){
	// base case
	if(i==n-1){
		return;
	}


	// recursive case
	for(int j=0;j<n-1-i;j++){ //place 1 element at correct position
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);


			}
		}

		bubblesortrecursion(arr,n,i+1);
}

void bubblesortrecursion2(int *arr,int n,int i,int j){

	// Base case

	if(i==n-1){
		return;
	}
	if(j==n-1-i){
		bubblesortrecursion2(arr,n,i+1,0);


	}
	else{
		if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);


			}
			bubblesortrecursion2(arr,n,i,j+1);

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

	// bubblesortrecursion(arr,n,0);
	bubblesortrecursion2(arr,n,0,0);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	



	return 0;
}