#include<iostream>
using namespace std;
int elephantways(int i,int j){
	// base case
	if(i==0&&j==0){
		return 1;
	}


	// recursive case
	int ans=0;
	// for col sum
	for(int k=0;k<i;k++){
		ans+=elephantways(k,j);

	}
	// for row sum
	for(int k=0;k<j;k++){
		ans+=elephantways(i,k);
	}
	return ans;
}
int elephantwaystopdown(int i,int j,int dp[][100]){
	// base case
	if(i==0&&j==0){
		return dp[i][j]=1;
	}


	// recursive case
	// calculate karne se pehle store
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int ans=0;
	// for col sum
	for(int k=0;k<i;k++){
		ans+=elephantwaystopdown(k,j,dp);

	}
	// for row sum
	for(int k=0;k<j;k++){
		ans+=elephantwaystopdown(i,k,dp);
	}
	return dp[i][j]=ans;
}
// itertive sol
int bottomup(int n,int m){
	int dp[100][100]={0};
	// initlization condition
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0&&j==0){
				dp[i][j]=1;
			}
			else{
				int ans=0;
				// sum for col
				for(int k=0;k<n;k++){
					ans+=dp[k][j];
				}
				// sum for row
				for(int k=0;k<m;k++){
					ans+=dp[i][k];
				}
				dp[i][j]=ans;
			}
		}
	}
	for(int l=0;l<=n;l++){
		for(int k=0;k<=m;k++){
			cout<<dp[l][k]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	return dp[n][m];



}

int main(){
	int i,j;
	cin>>i>>j;
	int dp[100][100];
	memset(dp,-1,sizeof(dp));//puri array will get initilized with -1
	cout<<elephantways(i,j)<<endl;
	cout<<elephantwaystopdown(i,j,dp)<<endl;
	for(int l=0;l<=i;l++){
		for(int m=0;m<=j;m++){
			cout<<dp[l][m]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<bottomup(i,j)<<endl;





	return 0;
}