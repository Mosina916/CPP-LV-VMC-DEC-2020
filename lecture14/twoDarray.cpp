#include <iostream>
using namespace std;
int main() {

    //1st way
    // int arr[3][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}

    // };
    //you can skip number of rows
    //2nd way
    //    int arr[][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}

    // };



    //  int arr[][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8}

    // };

    //    for(int row=0;row<3;row++){
    //     for(int col=0;col<3;col++){
    //         cout<<arr[row][col]<<" ";

    //     }
    //     cout<<endl;

    // }
    int arr[100][100];
    int rows,cols;
    cin>>rows>>cols;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][i]<<" ";

        }
        cout<<endl;

    }

    return 0;
}
