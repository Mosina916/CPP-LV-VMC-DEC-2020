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

	



	return 0;
}