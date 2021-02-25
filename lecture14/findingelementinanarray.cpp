#include <iostream>
using namespace std;
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

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl;

    // }
    int target,i,j;
    cin>>target;

      for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(target==arr[i][j]){
                cout<<target<<" found at index "<<i<<" "<<j<<endl;
                // return 0;
                break;


            }

        }
        if(j!=cols){
            break;
        }



    }
    if(i==rows){
        cout<<"key is not found"<<endl;
    }







    return 0;
}
