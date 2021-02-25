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
    // PRINTING ARRAY
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }

    for(int i=0;i<cols;i++){
        if(i%2==0){

            //MEANS EVEN

            for(int j=0;j<rows;j++){
                cout<<arr[j][i]<<" ";
            }

        }
        else{

            // means odd
            for(int j=rows-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }


        }
    }
    cout<<endl;


  







    return 0;
}
