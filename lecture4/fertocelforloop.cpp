#include<iostream>
#include<climits>
using namespace std;
int main(){
	int ival,fval,step;
	cin>>ival>>fval>>step;


	// int f=ival; //initialization condition

	// while(f<=fval){ //condition check


	// 	int cel=(5/9.0)*(f-32);

	// 	// int cel=((5)*(f-32))/9;

	// 	cout<<f<<" "<<cel<<endl;



	// 	f=f+step; //updation step
	// }

	for(int f=ival;f<=fval;f=f+step){

		int cel=(5/9.0)*(f-32);

		// int cel=((5)*(f-32))/9;

		cout<<f<<" "<<cel<<endl;



	}





	return 0;




}