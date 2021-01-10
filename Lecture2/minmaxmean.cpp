#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,min=INT_MAX,max=INT_MIN;
	float sum=0;
	cin>>n;
	int i=1; //initialization

	while(i<=n){ //condition check

		int no;
		cin>>no;
		//minimum

		if(no<min){
			min=no;
		}
		if(no>max){
			max=no;
		}
		sum=sum+no;
		i=i+1; //updation
	}
	float mean=sum/n;
	cout<<"minimum value among n numbers is :"<<min<<endl;
	cout<<"maximum value among n numbers is :"<<max<<endl;
	cout<<"mean of n numbers is :"<<mean<<endl;


	return 0;




}