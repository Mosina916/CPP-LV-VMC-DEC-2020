#include<iostream>
using namespace std;

bool isprimeornot(int n){
	int i=2;
		while(i<=n-1){
		if(n%i==0){
			return false; //the number is not prime

		}
		i++;
	}


	return true;
	


	// if(i==n){
	// 	return true;
	// }


}
int main(){


	int n;
	cin>>n;

	if(isprimeornot(n)){
		cout<<"number is prime"<<endl;
	}
	else{
		cout<<"number is not prime"<<endl;
	}

	// cout<<"the no is "<<isprimeornot(n)<<endl;


		


	
	cout<<endl;

	return 0;
}