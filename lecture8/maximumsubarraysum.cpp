#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,i,j,maximumsum=INT_MIN;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"printing array"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";


	}
	cout<<endl;

	for(int i=0;i<=n-1;i++){
		for(int j=i;j<=n-1;j++){
			//that will print the subarray that lies between i and j
			int sum=0;
			for(int k=i;k<=j;k++){
				// cout<<arr[k]<<" ";
				sum=sum+arr[k];
			}
			if(sum>maximumsum){
				maximumsum=sum;

			}
			// cout<<endl;

		}
	}
	cout<<"maximum sum is "<<maximumsum<<endl;
	



	return 0;
}