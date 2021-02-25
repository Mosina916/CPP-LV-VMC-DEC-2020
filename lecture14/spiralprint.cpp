#include <iostream>
using namespace std;

    void spiralprint(int arr[100][100],int rows,int cols){
        int sr=0,sc=0,er=rows-1,ec=cols-1;


    while(sc<=ec&&sr<=er){

             
    for(int i=sc;i<=ec;i++){
        cout<<arr[sr][i]<<" ";
    }
    sr++;
    for(int j=sr;j<=er;j++){
        cout<<arr[j][ec]<<" ";
    }
    ec--;
    if(sr<er){
        for(int i=ec;i>=sc;i--){
        cout<<arr[er][i]<<" ";
    }
    er--;

    }
    

    if(sc<ec){

          for(int j=er;j>=sr;j--){
        cout<<arr[j][sc]<<" ";
    }
    sc++;

    }
  




        }
         }

int main() {

    
    int arr[100][100];
    int rows,cols;
    cin>>rows>>cols;
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];

        }
        // cout<<endl;

    }
    // PRINTING ARRAY
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }

    spiralprint(arr,rows,cols);


    return 0;
}

    