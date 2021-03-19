#include<iostream>
using namespace std;
int upperbound(int key,int *arr,int n){
	int si=0;
	int ei=n-1;
	int ans=-1;
	while(si<=ei){
		int mid=(si+ei)/2;
		if(arr[mid]==key){
			ans=mid;
			si=mid+1;
		}
		else if(arr[mid]>key){
			ei=mid-1;
		}
		else{
			si=mid+1;
		}

	}
	return ans;
}

int lowerbound(int key,int *arr,int n){
	int si=0;
	int ei=n-1;
	int ans=-1;
	while(si<=ei){
		int mid=(si+ei)/2;
		if(arr[mid]==key){
			ans=mid;
			ei=mid-1;
		}
		else if(arr[mid]>key){
			ei=mid-1;
		}
		else{
			si=mid+1;
		}

	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[100000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	int t;
	cin>>t;
	while(t--){
		int key;
		cin>>key;
		cout<<lowerbound(key,arr,n)<<" ";
		cout<<upperbound(key,arr,n)<<endl;
	}
	

	return 0;
}