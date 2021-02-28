#include <iostream>
using namespace std;
#define ll long long int

void mergetwosortedarray(ll *arr,ll s,ll e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	ll *temp= new ll[2000000];
	int k=s;
	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
			// k++;
			// i++;
		}
		else{
			temp[k]=arr[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;



	}
	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;

	}
	for(ll i=s;i<=e;i++){
		arr[i]=temp[i];//copying temp in arr;
	}

	delete [] temp;


}

void mergesort(ll *arr,ll s,ll e){
	//base case
	if(s>=e){
		return;
	}

	// recursive case
	int mid=(s+e)/2;
	mergesort(arr,s,mid); // 1 2 4
	mergesort(arr,mid+1,e); // 3 5
	mergetwosortedarray(arr,s,e);


}
int main(){
	int n;
	cin>>n;
	// int arr[100000000];
	// datatype *variable name=new datatype[size]; //dynamic memory allocation
	ll *arr=new ll[2000000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	mergesort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<endl;

	delete []arr;





}