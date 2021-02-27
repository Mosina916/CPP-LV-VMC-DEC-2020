#include<iostream>
using namespace std;


int main(){
	int n,i;
	cin>>n;
	int arr[1005];
	for (i = 0; i < n; ++i)
	{
		cin>>arr[i]; //1 3 5 7 9 
		
	}
	// i--->5
	for( ;i<2*n;i++){
		cin>>arr[i]; //2 4 6 8 10
	}
	sort(arr,arr+2*n); //1 2 3 4 5 6 7 8 9 10

	cout<<arr[n-1]<<endl;


	


	
	
	return 0;
}