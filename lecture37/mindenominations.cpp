#include<iostream>
using namespace std;
int minden(int *coins,int amount,int n){
	// base case 
	if(amount==0){
		return 0;
	}


	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int chotaamount=amount-coins[i];
			int chotaans=minden(coins,chotaamount,n);
			if(chotaans!=INT_MAX&&chotaans<ans){
				ans=chotaans+1;


			}


		}
	}
	return ans;
}
 //topdown

int mindentopdown(int *coins,int amount,int n,int *dp){
	// base case 
	if(amount==0){
		return dp[amount]=0;
	}

	// check;
	if(dp[amount]!=-1){
		return dp[amount];
	}


	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int chotaamount=amount-coins[i];
			int chotaans=mindentopdown(coins,chotaamount,n,dp);
			if(chotaans!=INT_MAX&&chotaans<ans){
				ans=chotaans+1;


			}


		}
	}
	//return se pehle store
	return dp[amount]=ans;
}
int bottomup(int *coins,int amount,int n){
	int *dp=new int[amount+1];
	for(int i=0;i<=amount;i++){
		dp[i]=INT_MAX;
	}
	// initilization 
	dp[0]=0;
	for(int rup=1;rup<=amount;rup++){
		for(int i=0;i<n;i++){
			if(rup-coins[i]>=0){
				int chotaamt=rup-coins[i];
				dp[rup]=min(dp[chotaamt]+1,dp[rup]);

			}
		}
	}
	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[amount];
}



int main(){
	int coins[]={1,3,5,10};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;
	

	int dp[1000];
	for (int i = 0; i < 1000; ++i)
	{
		dp[i]=-1;
	}
	cout<<mindentopdown(coins,amount,n,dp)<<endl;
	cout<<bottomup(coins,amount,n)<<endl;


	cout<<minden(coins,amount,n)<<endl;
	



	return 0;
}