#include<iostream>
using namespace std;
int main(){


	int n,no;
	cin>>no;


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



	


	
	cout<<endl;

	return 0;
}