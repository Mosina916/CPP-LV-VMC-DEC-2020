#include<iostream>
#include<climits>
using namespace std;


void selectionsort(int a[],int n){
	for(int i=0;i<=n-2;i++){
		int min=i;

		for(int j=i+1;j<=n-1;j++){
			if(*(a+min)>*(a+j)){
				min=j;
			}

		}
		swap(*(a+min),*(a+i));
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
	cout<<"Array Before sorting"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	//selection sort
	selectionsort(arr,n);

	
	cout<<"Array after sorting"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	




	return 0;
}