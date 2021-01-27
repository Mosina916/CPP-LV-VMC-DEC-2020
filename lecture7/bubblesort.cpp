#include<iostream>
#include<climits>
using namespace std;
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
	//bubblesort
	for(int i=0;i<=n-2;i++){
		// for(int j=0;j<=n-2;j++){
		for(int j=0;j<=n-2-i;j++){ //optimization
			if(arr[j]>arr[j+1]){
				//swap;
				// with another variable temp

				// int temp=arr[j];
				// arr[j]=arr[j+1];
				// arr[j+1]=temp;

				// without temp
				// arr[j]=arr[j]+arr[j+1];
				// arr[j+1]=arr[j]-arr[j+1];
				// arr[j]=arr[j]-arr[j+1];

				// inbuild swap

				swap(arr[j],arr[j+1]);

				// one line swap

				// b=(a+b)-(a=b);

			}
		}
	}
	cout<<"Array after sorting"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	


	return 0;
}