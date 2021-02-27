#include<iostream>
using namespace std;
bool alternatingbits(int n){ //1010
	n=n^(n>>1); //0101 n--->1111;
	bool ans=n&(n+1);
	if(ans==0){
		return true;

	}
	return false;
	
}


int main(){
	int n;
	cin>>n;
	bool result=alternatingbits(n);
	if(result==true){
		cout<<"True";
	}
	else{
		cout<<"False";
	}



	return 0;
}