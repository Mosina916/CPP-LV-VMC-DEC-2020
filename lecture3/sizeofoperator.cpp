#include<iostream>
using namespace std;
int main(){
	int a=10;
	char ch='A';
	bool israining='5';
	float f=10.4;
	double x=10.4;

	// sizeof operator mai hum ya tou datatype desakte hai ,ya tou variable name,
	// ya tou direct value

	
	// cout<<sizeof(int)<<endl;
	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(10)<<endl;
	// cout<<sizeof(char)<<endl;
	// cout<<sizeof(ch)<<endl;
	// cout<<sizeof('A')<<endl;
	cout<<sizeof(bool)<<endl; //1
	cout<<sizeof(israining)<<endl; //1
	cout<<sizeof(10.4f)<<endl; //4
	// cout<<sizeof(char)<<endl;
	// cout<<sizeof(ch)<<endl;
	// cout<<sizeof('A')<<endl;

	// cout<<sizeof(float)<<endl;
	// cout<<sizeof(f)<<endl;
	// cout<<sizeof(10.4)<<endl;

	cout<<sizeof(double)<<endl;
	cout<<sizeof(x)<<endl;
	cout<<sizeof(10.4)<<endl;





	return 0;


}