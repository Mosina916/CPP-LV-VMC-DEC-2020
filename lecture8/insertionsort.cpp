#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"array Before insertion sort:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";


	}
	//insertion sort

	for(i=1;i<=n-1;i++){
		int current=arr[i];
		for(j=i-1;j>=0&&arr[j]>current;j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=current;
	}
	//after insertion sort

	cout<<"array after insertion sort:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";


	}
	cout<<endl;



	return 0;
}