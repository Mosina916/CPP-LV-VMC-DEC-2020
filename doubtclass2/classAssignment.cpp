#include<iostream>
using namespace std;
int findno(int n){
	// base case
	if(n==1||n==2){
		return n+1;
	}

	// recursive case
	return findno(n-1)+findno(n-2);
}
int main(){
	int t;
	cin>>t;
	int k=1;
	while(t--){
		int n;
		cin>>n;
		int x=findno(n);


		cout<<"#"<<k<<" : "<<x<<endl;
		k++;

	}



	return 0;
}