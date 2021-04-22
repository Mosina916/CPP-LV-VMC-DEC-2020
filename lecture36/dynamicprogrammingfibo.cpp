#include<iostream>
using namespace std;
int fibo(int n){


	// base case
	if(n==0||n==1){
		return n;
	}

	// recursive case
	return fibo(n-1)+fibo(n-2);
}

int topdownfibo(int n,int *dp){


	// base case
	if(n==0||n==1){
		return dp[n]=n;
	}
	// calculate karne se pehle check
	if(dp[n]!=-1){
		return dp[n];

	}

	// recursive case
	// return karne se pehle store
	// arr[n]=fibodp(n-1,arr)+fibodp(n-2,arr);
	return dp[n]=topdownfibo(n-1,dp)+topdownfibo(n-2,dp);
}

int bottomupfibo(int n){
	int*arr=new int[n+1];
	//initilization
	arr[0]=0;
	arr[1]=1;
	// loop 

	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int ans=arr[n];
	delete []arr;

	return ans;


}

int main(){
	int n;
	cin>>n;
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	cout<<"topdownfibo"<<endl;
	cout<<topdownfibo(n,arr)<<endl;


	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<"bottomupfibo"<<endl;


	cout<<bottomupfibo(n)<<endl;


	cout<<fibo(n)<<endl;
	

	return 0;
}