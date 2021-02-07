#include<iostream>
using namespace std;

void update(int &a){
	int &z=a;
	a=a+1; //update
	cout<<"value of a inside update is "<<a<<endl;//2 11
	cout<<"value of z inside update is "<<z<<endl; // 



}
int main(){

	int a=10;

	cout<<"value of a is "<<a<<endl; //1 10
	update(a); //you can give name of variaable as well as value 
	// update(10);
	cout<<"value of a after increment is "<<a<<endl; //3 11


	int x=30; //x is variable
	int &y=x; //y is refrence
	int &z=y; //z is refrence of refrence

	cout<<"value of x is "<<x<<endl; //1
	cout<<"value of y is "<<y<<endl; //2
	cout<<"value of z is "<<z<<endl; //3
	

	return 0;
}