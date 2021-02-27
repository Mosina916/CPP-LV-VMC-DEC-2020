#include<iostream>
using namespace std;
int multiply(int a,int b){

	// base case
	if(b==0){
		return 0;
	}
	

	// if(b-1==0){
	// 	return a;
	// }
	 // recursive case
	// int chotaans=multiply(a,b-1);
	// int badaans=a+chotaans;
	// return badaans;

	return a+multiply(a,b-1);
}

int main(){
	int a,b;
	cin>>a>>b;
	// int x=multiply(a,b)

	cout<<multiply(a,b)<<endl;
	




	return 0;
}