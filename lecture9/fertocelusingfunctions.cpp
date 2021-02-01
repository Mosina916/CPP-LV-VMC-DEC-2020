#include<iostream>
#include<climits>
using namespace std;


void printingtables(int ival,int fval,int step){
	for(int f=ival;f<=fval;f=f+step){

		int cel=(5/9.0)*(f-32);

		// int cel=((5)*(f-32))/9;

		cout<<f<<" "<<cel<<endl;



	}


}
int main(){
	int ival,fval,step;
	cout<<"enter ival, fval, step"<<endl;
	cin>>ival>>fval>>step;
	printingtables(ival,fval,step);

	// cout<<"enter ival, fval, step"<<endl;
	
	cin>>ival>>fval>>step;
	printingtables(ival,fval,step);

	// cout<<"enter ival, fval, step"<<endl;
	cin>>ival>>fval>>step;
	printingtables(ival,fval,step);

	




	return 0;




}