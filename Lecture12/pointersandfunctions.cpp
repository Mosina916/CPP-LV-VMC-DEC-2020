#include<iostream>
using namespace std;
void update(int *z){

	*z=*z+2;


}
int main(){
	int x=10;
	int* y=&x;
	cout<<"Value of x is :"<<x<<endl;
	update(y);
	cout<<"Value of x is :"<<x<<endl;


	return 0;
}