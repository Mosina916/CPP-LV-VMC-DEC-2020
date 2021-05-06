#include<iostream>
#include<vector>
using namespace std;
int editdistance(char *s1,char *s2,int i,int j,int dp[][100]){
	// base case
	// i is length of s1
	if(i==0){
		return dp[i][j]=j;

	}
	if(j==0){
		return dp[i][j]=i;
	}


	// recursive case
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	if(s1[i-1]==s2[j-1]){
		//ignore
		return dp[i][j]=editdistance(s1,s2,i-1,j-1,dp);
	}
	else{
		int op1=editdistance(s1,s2,i-1,j-1,dp); //replace //3
		int op2=editdistance(s1,s2,i,j-1,dp);//insert //4
		int op3=editdistance(s1,s2,i-1,j,dp);//delete //5
		return dp[i][j]=min(op1,min(op2,op3))+1;
	}

}
int main(){
	char s1[1000],s2[1000];
	int dp[100][100];
	memset(dp,-1,sizeof(dp));
	cin>>s1>>s2;
	int i=strlen(s1);
	int j=strlen(s2);
	cout<<editdistance(s1,s2,i,j,dp)<<endl;
	return 0;



}