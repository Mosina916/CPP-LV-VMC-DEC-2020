#include <iostream>
using namespace std;
int poweroftn(int x,int n){
    // Base case
    if(n==0){
        return 1;
    }


    // Recursive case
    return x*poweroftn(x,n-1);
}
int main() {
   int x,n;
   cin>>x>>n;
   cout<<poweroftn(x,n)<<endl;
   return 0;
}
