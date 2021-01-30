#include<iostream>
#include<climits>
#include<cmath>
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



	//kadenes algo

	int cs=0,ms=0;
	for(int i=0;i<=n-1;i++){
		cs=cs+arr[i];
		if(cs<0){
			cs=0;
		}
		ms=max(ms,cs);
	}
	cout<<"maximum sum is "<<ms<<endl;
	



	return 0;
}