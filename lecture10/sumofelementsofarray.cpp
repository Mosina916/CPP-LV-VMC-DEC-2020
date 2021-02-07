#include<iostream>
using namespace std;


int sumofarray(int a[],int n){
	int sum=0;
		for(int i=0;i<n;i++){
		sum=sum+a[i];

	}

	return sum;


}
void takeinput(int a[],int &n){
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>a[i];

	}

}


int main(){
	//input manually
	// int a[]={1,2,6,4,5,3,9,40};
	// int n=sizeof(a)/sizeof(int);

// 	int sum=0;
// 		for(int i=0;i<n;i++){
// 		sum=sum+a[i];
// }
	
	// cout<<"total sum is : ";
	// cout<<sum<<endl;

	//input from user
	int a[100],n;
	// cin>>n;	


	// for(int i=0;i<n;i++){
	// 	cin>>a[i];

	// }
	takeinput(a,n);

	cout<<"total sum is : ";
	cout<<sumofarray(a,n)<<endl;

	


// 	cout<<"array Before updation"<<endl;
// 	printarray(arr,n); 

// 	update(arr,n);

// 	cout<<"array after updation"<<endl;

// 	printarray(arr,n);

	

	return 0;
}