#include<iostream>
using namespace std;
int main(){

	int no;
	cin>>no;
	int i=0;
	while(i*i<=no){
		i++;
	}
	cout<<i-1<<endl;



	return 0;
}