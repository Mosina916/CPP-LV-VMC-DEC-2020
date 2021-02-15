#include <iostream>
using namespace std;

int add(int a=0,int b=0,int c=0,int d=0){
	return a+b+c+d;
}
int main()
{


	cout<<add(5,6,7)<<endl;
	cout<<add(5,6,7,9)<<endl;
	cout<<add(5,6)<<endl;
	cout<<add()<<endl;
	cout<<add(5)<<endl;






	return 0;
}