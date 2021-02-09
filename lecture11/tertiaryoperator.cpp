#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	int age=10;
	if(age<8){

		cout<<"age is less than 8"<<endl;

	}
	else{
		cout<<"age is greater than 8"<<endl;
	}

	// tertiary operator

	age<8?cout<<"age is less than 8"<<endl : cout<<"age is greater than 8"<<endl;



	return 0;
}