#include<iostream>
using namespace std;

void update(int a){
	a=a+1; //update
	cout<<"value of a inside update is "<<a<<endl;//2 11



}
int main(){

	int a=10;

	cout<<"value of a is "<<a<<endl; //1 10
	update(a);
	cout<<"value of a after increment is "<<a<<endl; //3 10
	

	return 0;
}