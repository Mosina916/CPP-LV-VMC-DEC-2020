#include<iostream>
using namespace std;
int minto1(int n){
	// base case 
	if(n==1){
		return 0;
	}



	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op3=minto1(n-1);

	if(n%3==0){
		op1=minto1(n/3);
	}
	if(n%2==0){
		op2=minto1(n/2);

	}

	
	return min(op1,min(op2,op3))+1; //min(2 arguments)

}

//topdown
int topdownminto1(int n,int*dp){
	// base case 
	if(n==1){
		return dp[n]=0;
	}


	// calculate karne se pehle check
	if(dp[n]!=-1){
		return dp[n];
	}

	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op3=topdownminto1(n-1,dp);

	if(n%3==0){
		op1=topdownminto1(n/3,dp);
	}
	if(n%2==0){
		op2=topdownminto1(n/2,dp);

	}
	//RETURN SE PEHLE STORE
	
	return dp[n]=min(op1,min(op2,op3))+1; //min(2 arguments)

}
int bottonup(int n){
	int *dp=new int[n+1];
	// base case of td id initilization condition here
	dp[1]=0;
	int op1,op2,op3;
	for(int i=2;i<=n;i++){
		op1=op2=op3=INT_MAX;
		op1=dp[i-1];
		if(i%2==0){
			op2=dp[i/2];
		}
		if(i%3==0){
			op3=dp[i/3];
		}
		dp[i]=min(op1,min(op2,op3))+1;
	}
	for(int i=1;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	return dp[n];


}
int main(){
	int n;
	cin>>n;
	
	int *dp=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		dp[i]=-1;
	}
	cout<<topdownminto1(n,dp)<<endl;
	for (int i = 1; i <=n; ++i)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	cout<<bottonup(n)<<endl;


	cout<<minto1(n)<<endl;



	return 0;
}