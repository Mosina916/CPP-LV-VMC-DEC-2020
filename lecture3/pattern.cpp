#include<iostream>
using namespace std;
int main(){
	int n,val;
	cin>>n;
	int rowno=1;
	while(rowno<=n){

		if(rowno%2!=0){
			val=1;
		}
		else{
			val=0;
		}
		

		int count=1;
		while(count<=rowno){
			cout<<val<<" ";
			val=1-val;

			count++;
		}
		cout<<endl;


		rowno++;
	}

	return 0;


}