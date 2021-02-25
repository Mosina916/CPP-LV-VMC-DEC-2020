#include <iostream>
using namespace std;
int main() {
   char arr[][3]={
       {'A','B','c'},
       {'D','E','F'},
       {'G','H','i'}
   };

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }

    cout<<arr[0]<<endl; //ABC   A
    cout<<arr[1]<<endl; //DEF   B
    cout<<arr[2]<<endl; //GHI   C

    return 0;


}
