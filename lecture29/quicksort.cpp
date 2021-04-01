#include<iostream>
#include<ctime>
using namespace std;
int partionhelper(int*arr,int s,int e){
	int i=s-1;
	int pivot=arr[e];
	for(int j=s;j<=e-1;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[e]);
	return i+1;

}
int partion(int *arr,int s,int e){
	srand(time(0));
	int r=s+rand()%(e-s);
	swap(arr[r],arr[e]);
	return partionhelper(arr,s,e);
}
void quicksort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}


	// recursive case
	int p=partion(arr,s,e); //i+1
	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e); //tail recursion-->without return

	// return quicksort(arr,p+1,e); //non tail


}

int main(){

	int n,arr[1000];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	cout<<"Before sorting"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<endl;
	quicksort(arr,0,n-1);
	cout<<"After sorting"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	cout<<endl;

	// srand(time(0));

	// for (int i = 0; i < 5; ++i)
	// {
	// 	cout<<rand()%5<<" ";
	// }
	// cout<<endl;






	return 0;
}