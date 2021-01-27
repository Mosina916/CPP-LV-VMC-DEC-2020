#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[100],min;
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

	for(int i=0;i<=n-2;i++){
		min=i;

		for(int j=i+1;j<=n-1;j++){
			if(arr[min]>arr[j]){
				min=j;
			}

		}
		swap(arr[min],arr[i]);
	}
	cout<<"Array after sorting"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	


	return 0;
}