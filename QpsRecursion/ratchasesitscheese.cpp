#include<iostream>
using namespace std;
int sol[1001][1001];
bool visited[1001][1001];
bool ratinamaze(char maze[][1001],int i,int j,int m,int n){
	// base case
	if(i==m-1&&j==n-1){
		sol[i][j]=1;
		// printing
		for(int k=0;k<m;k++){
			for(int l=0;l<n;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		// cout<<endl;
		// return true; 

		return true;


	}
	if(visited[i][j]){
        return false;
    }

	// recursive case
	visited[i][j]=1;
	sol[i][j]=1; //puts 1 at current position

	// check for rightward path
	if(j+1<n&&!visited[i][j+1]){
		bool kyarightsepathexistkartahai=ratinamaze(maze,i,j+1,m,n);
		if(kyarightsepathexistkartahai==true){
			return true;
		}


	}

	// check for downward path

	if(i+1<m&&!visited[i+1][j]){
		bool kyaneechepathexistkartahai=ratinamaze(maze,i+1,j,m,n);
		if(kyaneechepathexistkartahai==true){
			return true;
		}
	}
	// check for left path
	if(j-1>=0&&!visited[i][j-1]){
		bool kyaleftsepathexistkartahai=ratinamaze(maze,i,j-1,m,n);
		if(kyaleftsepathexistkartahai==true){
			return true;
		}

	}
	// // //upwards
	if((i-1>=0)&&!visited[i-1][j]){
		bool kyauperpathexistkartahai=ratinamaze(maze,i-1,j,m,n);
		if(kyauperpathexistkartahai==true){
			return true;
		}
	}

	sol[i][j]=0;
	return false;




}


int main(){
	char maze[1001][1001];
    int n,m;
    cin>>m>>n; //m-->rows, n-->cols
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>maze[i][j];
            if(maze[i][j]=='X')
                visited[i][j]=1;
        }
    }
	bool ans=ratinamaze(maze,0,0,m,n);
	if(ans==false){
		cout<<"NO PATH FOUND"<<endl;
	}


	return 0;
}