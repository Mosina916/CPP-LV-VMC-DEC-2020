#include<iostream>
using namespace std;
int nstaircase(int n,int k){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}



	// recursive case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=nstaircase(n-i,k);

	}
	return ans;
}
int nstaircasetopdown(int n,int k,int *dp){
	// base case
	if(n==0){
		return dp[n]=1;
	}
	if(n<0){
		return 0;
	}



	// recursive case
	// calculate se pehle check
	if(dp[n]!=-1){
		return dp[n];

	}

	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=nstaircase(n-i,k);

	}
	return dp[n]=ans;
}
int bottomup(int n,int k){
	int dp[1000];
// initilization condition
	dp[0]=1;
	for(int i=1;i<=n;i++){
		int ans=0;
		for(int j=1;j<=k;j++){
			if(i>=j){
				ans+=dp[i-j];
			}
		}
		dp[i]=ans;
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[n];


}
int nstaircaseoptimized(int n,int k){
	int dp[1000];
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++){
		if(i-1-k>=0){
			dp[i]=2*dp[i-1]-dp[i-1-k];
		}
		else{
			dp[i]=2*dp[i-1];

		}
	}
	return dp[n];
}

int main(){
	int dp[1000];
	memset(dp,-1,sizeof(dp));
	int n,k;
	cin>>n>>k;
	cout<<nstaircase(n,k)<<endl;
	cout<<nstaircasetopdown(n,k,dp)<<endl;
	cout<<bottomup(n,k)<<endl;
	cout<<nstaircaseoptimized(n,k)<<endl;

	



	return 0;
}