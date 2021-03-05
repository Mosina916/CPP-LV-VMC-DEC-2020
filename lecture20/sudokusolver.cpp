#include<iostream>
using namespace std;
bool kyamainumberrakhsaktihun(int mat[][9],int i,int j,int number,int n){
	// rows and  cols
	for(int k=0;k<n;k++){
		// case 1 k==0 j==0 i==0
		// case 2 k==1 j==0 i==0
		// case 3 k==2 j==0 i==0
		// case 4 k==3 j==0 i==0
		// case 5 k==4 j==0 i==0
		if(mat[k][j]==number||mat[i][k]==number){
			return false;
		}
	}

	// small box;
	n=sqrt(n); //n<--3
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int i=starti;i<starti+n;i++){
		for(int j=startj;j<startj+n;j++){
			if(mat[i][j]==number){
				return false;
			}
		}
	}

	return true;


}


bool sudokusolver(int mat[][9],int i,int j,int n){
	// base case 
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
				
			}
			cout<<endl;

		}
		cout<<endl;
		return true;
	}

	if(j==n){
		// bool chotaans=sudokusolver(mat,i+1,0,n);
		// return chotaans;
		return sudokusolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		 return sudokusolver(mat,i,j+1,n);

	}


	// recursive case
	for(int number=1;number<=n;number++){
		if(kyamainumberrakhsaktihun(mat,i,j,number,n)==true){
			mat[i][j]=number;
			bool kyabakiseanswermila=sudokusolver(mat,i,j+1,n);
			if(kyabakiseanswermila==true){
				return true;

			}
			mat[i][j]=0; //backtracking

		}

	}
	return false;
}

int main(){
	int mat[9][9] =
		{
		{5,3,0,0,7,0,0,0,0}, //0 denotes empty
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};
	bool ans=sudokusolver(mat,0,0,9);
	if(ans==false){
		cout<<"invalid sudoku"<<endl;
	}

	return 0;

}