#include<iostream>
using namespace std;
int cou=0;
bool kyaqueenplacehosaktihai(int board[][50],int i,int j,int n){
	// rows and cols
	for(int k=0;k<n;k++){
		// case 1 k==0 j==0 i==0
		// case 2 k==1 j==0 i==0
		// case 3 k==2 j==0 i==0
		// case 4 k==3 j==0 i==0
		// case 5 k==4 j==0 i==0
		if(board[k][j]==1||board[i][k]==1){
			return false;
		}
	}


	// diagonals--> right
	int r=i,c=j; //r=0,c=0,i=0,j=0
	while(i>=0&&j<n){
		if(board[i][j]==1){
			return false;

		}
		i--;
		j++;
		// i=-1 j=1

	}


	//diagonal left
	while(r>=0&&c>=0){ //r=0 c=0
		if(board[r][c]==1){
			return false;

		}
		r--;
		c--;
		// r-1
		// c=-1

	}


	return true;


}

bool nqueen(int board[][50],int i,int n){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				// cout<<board[k][l]<<" ";
				if(board[k][l]==1){
					cout<<"Q ";
				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;

		}
		cout<<endl;
		cou++;
		// return true;
		return false;

	}


	// recursive case
	for(int j=0;j<n;j++){
		if(kyaqueenplacehosaktihai(board,i,j,n)==true){
			board[i][j]=1; // means Q
			bool kyabakiqueensplacehorahihai= nqueen(board,i+1,n);
			if(kyabakiqueensplacehorahihai==true){
				return true;

			}
			// else{
				board[i][j]=0; //backtracking 

			// }
			



		}

	}
	return false;

}

int main(){
	int board[50][50]={0};
	int n;
	cin>>n;
	nqueen(board,0,n);
	cout<<cou<<endl;

	return 0;

}