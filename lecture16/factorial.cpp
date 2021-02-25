#include<iostream>
using namespace std;

int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	// recursive case

	int chotiproblem=fact(n-1); //pure assumption
	
	// //find ans with the help of above two

	int badiproblem=n*chotiproblem;

	return badiproblem;

    // return n*fact(n-1); //without storing
}
int main(){

	int n;
	cin>>n;
	cout<<fact(n)<<endl;



	return 0;
}