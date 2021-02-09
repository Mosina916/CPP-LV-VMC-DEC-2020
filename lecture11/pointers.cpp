#include<iostream>
using namespace std;

int main(){

	int a=10;
	float f=10.14;
	double d=40.345;

	// cout<<"value of a is "<<a<<endl;
	// cout<<"value of f is "<<f<<endl;
	// cout<<"value of d is "<<d<<endl;


	cout<<"address of a is "<<&a<<endl;
	cout<<"address of f is "<<&f<<endl;
	cout<<"address of d is "<<&d<<endl;


	// cout<<"Size of a is "<<sizeof(a)<<endl; //4
	// cout<<"size of f is "<<sizeof(f)<<endl; //4
	// cout<<"size of d is "<<sizeof(d)<<endl; //8



	// cout<<"Size of &a is "<<sizeof(&a)<<endl; //4 bytes
	// cout<<"size of &f is "<<sizeof(&f)<<endl; //4
	// cout<<"size of &d is "<<sizeof(&d)<<endl; //8


	// int a=10;
	// float f=10.14;
	// double d=40.345;


	// pointer are used to store address

	int* aptr=&a; //initilization
	// int *aptr;
	// aptr=&a; //assignment

	// int *aptr=&a;

	float* fptr=&f;
	double* dptr=&d;
	cout<<"address of a is "<<aptr<<endl;
	cout<<"address of f is "<<fptr<<endl;
	cout<<"address of d is "<<dptr<<endl;

	cout<<"address of a+1 is "<<aptr+1<<endl;
	cout<<"address of f+1 is "<<fptr+1<<endl;
	cout<<"address of d+1 is "<<dptr+1<<endl;

	cout<<"address of a+2 is "<<aptr+2<<endl;
	cout<<"address of f+2 is "<<fptr+2<<endl;
	cout<<"address of d+2 is "<<dptr+2<<endl;


	char ch='A';
	cout<<"value of ch is "<<ch<<endl;
	// cout<<"address of ch is "<<&ch<<endl; //it will give wrong result

	//fool compiler

	cout<<"address of ch is "<<(double*)&ch<<endl;

	cout<<"address of ch is "<<(int*)&ch<<endl;

	cout<<"address of ch is "<<(float*)&ch<<endl;


	cout<<"address of ch is "<<(void*)&ch<<endl;

	// float g=10.144;
	// cout<<(int)g<<endl; //typecasting


	cout<<"address of ch+1 is"<<(void*)((&ch)+1)<<endl;
	cout<<"address of ch+1 is"<<(void*)((&ch)+2)<<endl;

	cout<<*aptr<<endl; //gives the value of bucket of which it will contain the address
	cout<<*fptr<<endl;

	cout<<*dptr<<endl;


















	


	return 0;
}