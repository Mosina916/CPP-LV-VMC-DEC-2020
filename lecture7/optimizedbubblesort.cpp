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
		int cnt=0;
		for(int j=0;j<=n-2-i;j++){ //optimization
			if(arr[j]>arr[j+1]){
				

				swap(arr[j],arr[j+1]);
				cnt++;


			}
		}
		if(cnt==0){
			break;
		}
	}
	cout<<"Array after sorting"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	


	return 0;
}