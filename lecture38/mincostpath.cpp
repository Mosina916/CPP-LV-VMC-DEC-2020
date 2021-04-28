#include<iostream>
using namespace std;
int solve(int cost[][4],int i,int j){
	// base case
	if(i==0&&j==0){
		return cost[i][j];
	}
	if(i<0||j<0){
		return INT_MAX;
	}



	// recursive case
	int op2=solve(cost,i-1,j);
	int op1=solve(cost,i,j-1);
	return min(op1,op2)+cost[i][j];

}
int topdown(int cost[][4],int i,int j,int dp[][100]){
	// base case
	if(i==0&&j==0){
		return dp[i][j]=cost[i][j];
	}
	if(i<0||j<0){
		return INT_MAX;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	// recursive case
	int op2=topdown(cost,i-1,j,dp);
	int op1=topdown(cost,i,j-1,dp);
	
	return dp[i][j]=min(op1,op2)+cost[i][j];

}
int bottomup(int a,int b,int cost[][4]){
	int dp[100][100];
	// dp[0][0]=cost[0][0];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==0&&j==0){
				dp[i][j]=cost[i][j];
			}
			// ist row
			else if(i==0){
				dp[i][j]=cost[i][j]+dp[i][j-1];
			}
			// ist cols
			else if(j==0){
				dp[i][j]=cost[i][j]+dp[i-1][j];
			}
			// baki ki array
			else{
				dp[i][j]=min(dp[i-1][j],dp[i][j-1])+cost[i][j];
			}


		}
	}
	return dp[a][b];
}





int main(){
	int cost[][4]={
		{2,1,3,4},
		{3,1,1,10},
		{1,6,1,1},
		{2,7,4,3}
	};
	int dp[100][100];
	// for (int i = 0; i < 100; ++i)
	// {
	// 	for(int j=0;j<100;j++){
	// 		dp[i][j]=-1;
	// 	}
	// }
	memset(dp,-1,sizeof(dp));
	int i=3,j=2;
	cout<<solve(cost,i,j)<<endl;
	cout<<topdown(cost,i,j,dp)<<endl;
	cout<<bottomup(i,j,cost)<<endl;
	

	return 0;
}