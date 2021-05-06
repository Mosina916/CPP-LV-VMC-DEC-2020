#include<iostream>
using namespace std;
int knapsack(int *price,int *weight,int capacity,int n,int dp[][100]){
	// base case
	if(n==0||capacity==0){
		return dp[n][capacity]=0;
	}
	// recursive case
	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}
	int op1=INT_MIN,op2=INT_MIN;
	// if you are including
	if(capacity>=weight[n-1]){
		op1=price[n-1]+knapsack(price,weight,capacity-weight[n-1],n-1,dp);

	}


	// if you are excluding
	op2=0+knapsack(price,weight,capacity,n-1,dp);


	return dp[n][capacity]=max(op1,op2);


}
int bottomup(int *price,int *weight,int tcapacity,int tn){
	int dp[100][100]={0};
	for(int n=1;n<=tn;n++){
		for(int ccap=1;ccap<=tcapacity;ccap++){
			int op1=INT_MIN,op2=INT_MIN;
			if(ccap>=weight[n-1]){
				op1=price[n-1]+dp[n-1][ccap-weight[n-1]];
			}
			op2=0+dp[n-1][ccap];
			dp[n][ccap]=max(op1,op2);


		}
	}
	return dp[tn][tcapacity];

}
int main(){
	int price[]={13,13,16};
	int weight[]={7,7,8};
	int n=sizeof(price)/sizeof(int);
	int dp[100][100];
	memset(dp,-1,sizeof(dp));
	int capacity=14;
	cout<<knapsack(price,weight,capacity,n,dp)<<endl;
	cout<<bottomup(price,weight,capacity,n)<<endl;





	return 0;
}