#include<iostream>
#include<climits>
using namespace std;
int main(){
	int ival,fval,step;
	cin>>ival>>fval>>step;


	int f=ival;

	while(f<=fval){


		// int cel=(5/9.0)*(f-32); //explicit type conversion

		// int cel=float(5)/9*(f-32);//explicit type conversion

		// int cel=((5)*(f-32))/9;

		int cel=(5*(f-32))/9;

		cout<<f<<" "<<cel<<endl;



		f=f+step;
	}

	return 0;




}