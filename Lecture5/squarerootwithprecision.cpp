#include<iostream>
using namespace std;
int main(){

	int no,precision;
	cin>>no;
	cin>>precision;

	float i=0;
	float inc=1;

	for(int j=0;j<=precision;j++){

		while(i*i<=no){
		i=i+inc;
	}
	i=i-inc;
	inc=inc/10;





	}

	cout<<i<<endl;
	



	return 0;
}