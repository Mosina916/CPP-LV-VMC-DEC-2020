#include<iostream>
using namespace std;
int main(){
	int arr[100];
	cout<<"enter the number of elements:"<<endl;

	int n,key,i;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter key"<<endl;
	cin>>key;

	for(i=0;i<n;i++){
		if(key==arr[i]){
			cout<<"key is found at index "<<i<<endl;
			break;
		}

	}
	if(i==n){
			cout<<"key not present"<<endl;
		}






	return 0;
}