#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[1005];
	// 5 7 9 1 2 4 6 8 3
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	int target;
	cin>>target;
	sort(arr,arr+n);
	// 1 2 3 4 5 6 7 8 9
	for(int i=0;i<=n-3;i++){
		int left=i+1;
		int right=n-1;
		while(left<right){
			if(arr[i]+arr[left]+arr[right]==target){
				cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
				left++;
				right--;
			}
			else if(arr[i]+arr[left]+arr[right]>target){
				right--;
			}
			else{
				left++;
			}

		}
	}


	
	
	return 0;
}