#include<iostream>
using namespace std;
void factorial(int no); //forward decleration -->used when we write our functions below main

int main(){


	int no;
	cin>>no;

	factorial(no);
	


	return 0;
}


void factorial(int no){
	int ans=1;
	for(int i=1;i<=no;i++){
		ans=ans*i;
	}
	cout<<"factorial is "<<ans<<endl;

}
