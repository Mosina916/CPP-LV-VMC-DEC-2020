#include<iostream>
using namespace std;
int wineproblem(int l,int r,int *price,int day){
	// base case
	if(l>r){
		return 0;
	}


	// recursive case
	int op1=(price[l]*day+wineproblem(l+1,r,price,day+1));
	int op2=(price[r]*day+wineproblem(l,r-1,price,day+1));
	return max(op1,op2);

}


int topdown(int l,int r,int *price,int day,int dp[][100]){
	// base case
	if(l>r){
		// store
		return dp[l][r]=0;
	}
	//calculate karne se pehle check
	if(dp[l][r]!=-1){
		return dp[l][r];
	}


	// recursive case
	int op1=(price[l]*day+topdown(l+1,r,price,day+1,dp));
	int op2=(price[r]*day+topdown(l,r-1,price,day+1,dp));
	// store
	return dp[l][r]=max(op1,op2);

}

int bottomup(int *price ,int n){
	int dp[100][100]={0};
	// diagnols pe kaam kiya 
	for(int i=0;i<n;i++){
		dp[i][i]=n*price[i];
	}
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
			if(i<j){
				int day=n-(j-i);
				int op1=day*price[i]+dp[i+1][j];
				int op2=day*price[j]+dp[i][j-1];
				dp[i][j]=max(op2,op1);
			}
		}
	}
	return dp[0][n-1];

}

int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);
	
	int dp[100][100];
	for (int i = 0; i < 100; ++i)
	{
		for(int j=0;j<100;j++){
			dp[i][j]=-1;

		}
	}
	cout<<topdown(0,n-1,price,1,dp)<<endl; //top down
	cout<<bottomup(price,n)<<endl;


	cout<<wineproblem(0,n-1,price,1)<<endl; //simple recursion

	return 0;
}