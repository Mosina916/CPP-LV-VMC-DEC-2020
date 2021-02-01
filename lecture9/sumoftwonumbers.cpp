#include <iostream>
using namespace std;


void sumoftwonumbers(int a,int b){
	int sum=a+b;
	cout<<"sum is : "<<sum<<endl;

}

int main(){


	int x,y;
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;

	sumoftwonumbers(x,y); //it is not necessary to have the same names in the function declartion as they are in function calling
	// cout<<"enter two numbers"<<endl;
	// cin>>x>>y;

	// sumoftwonumbers(x,y);


	

	return 0;
}