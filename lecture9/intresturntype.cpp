#include <iostream>
using namespace std;


int sumoftwonumbers(int a,int b){
	int sum=a+b;
	// cout<<"sum is : "<<sum<<endl;
	return sum;

}



int main(){


	int x,y;
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;

	int val=sumoftwonumbers(x,y);

	// cout<<"sum is : "<<sumoftwonumbers(x,y)<<endl; //it is not necessary to have the same names in the function declartion as they are in function calling
	cout<<"sum is : "<<val<<endl; 
	return 0;
}