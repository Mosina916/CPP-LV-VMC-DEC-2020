#include<iostream>
using namespace std;

// int factorial(int no);
int ncr(int n,int r);





int factorial(int no){
	int ans=1;
	for(int i=1;i<=no;i++){
		ans=ans*i;
	}
	// cout<<"factorial is "<<ans<<endl;
	return ans;

}



int main(){


	int n,r;
	cout<<"value of n should be greater or equal to r "<<endl;
	cinn>>n>>r;
	if(n>r){
		int x=ncr(5,2);

		cout<<"value of ncr is "<<x<<endl;

	}
	
	else{
		
		cout<<"error"<<endl;
		
	}

	
	


	return 0;
}
int ncr(int n,int r){
	int result=factorial(n)/(factorial(r)*factorial(n-r));

	return result;

}