#include<iostream>
using namespace std;
string s[]={"Zero","one","Two","Three","Four","Five","six","seven","eight","nine"};

// 2048 -->eight  four zero two
void inttostringreverse(int n){ //


	// base case
	if(n==0){
		return;
	}
	// recursive case
	int digit=n%10; //8
	cout<<s[digit]<<" ";
	inttostringreverse(n/10);
}
// 2048 -->two zero four eight
void inttostring(int n){ //
	// Base case
	if(n==0){
		return;
	}
	// Recursive case
	int digit=n%10; //8
	
	inttostring(n/10);
	cout<<s[digit]<<" ";
}



int main(){
	int n;
	cin>>n;


	inttostringreverse(n);
	cout<<endl;
	inttostring(n);




	return 0;
}