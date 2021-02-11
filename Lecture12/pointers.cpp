#include<iostream>
using namespace std;
int main(){
	int radius=10;
	// int *rptr=&radius; //initilization

	// int *rptr;

		int *rptr=NULL; //pointer point to the 0 address memory location

	// int *rptr=0;
	

	cout<<"Circumference of circle is :";
	// cout<<2*3.14*(radius)<<endl;
	cout<<2*3.14*(*rptr)<<endl;
	return 0;
}