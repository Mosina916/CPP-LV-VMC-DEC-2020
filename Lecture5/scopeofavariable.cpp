#include<iostream>
using namespace std;
int y=40; //global variable
int main(){
	int y=60;

	// int x=10;
	// cout<<"value of x is : "<<x<<endl; //10

	// if(x>0){
	// 	int x=30;
	// 	int y=20;
	// 	cout<<"value of x is : "<<x<<endl;//30
	// 	cout<<"value of y is : "<<y<<endl; //20

	// }


	// // cout<<"value of y is : "<<y<<endl;
	// cout<<"value of x is : "<<x<<endl;


	// int x=10;
	// cout<<"value of x is : "<<x<<endl; //10

	// if(x>0){
	// 	int y=20;
	// 	cout<<"value of x is : "<<x<<endl;//10
	// 	cout<<"value of y is : "<<y<<endl; //20

	// }



	// cout<<"value of y is : "<<y<<endl; //40
	// // cout<<"value of x is : "<<x<<endl;


	int x=10;
	cout<<"value of x is : "<<x<<endl; //10

	if(x>0){
		int y=20;
		cout<<"value of x is : "<<x<<endl;//10
		cout<<"value of y is : "<<::y<<endl; //40 //scope resolution operator

	}



	cout<<"value of y is : "<<::y<<endl; //40



	return 0;
}