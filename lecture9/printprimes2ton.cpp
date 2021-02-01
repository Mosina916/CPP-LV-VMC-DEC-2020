#include<iostream>
using namespace std;

void generateprimes(int no){
	for(int n=2;n<=no;n++){


		int i=2;
		while(i<=n-1){
		if(n%i==0){
			// cout<<"not prime"<<endl;
			break;

		}
		i++;
	}


	if(i==n){
		cout<<n<<" ";
	}




	}



}
int main(){


	int no;
	cin>>no;
	generateprimes(no);

	cin>>no;
	generateprimes(no);

	
	cin>>no;
	generateprimes(no);



	
	cout<<endl;

	return 0;
}