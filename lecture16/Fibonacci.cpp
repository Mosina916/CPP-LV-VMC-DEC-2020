#include<iostream>
using namespace std;

int fibono(int n){
    //base case

    if(n==0||n==1){
        return n;

    }

    // Recursive case

    // int chotiproblem1=fibono(n-1);
    // int chotiproblem2=fibono(n-2);
    // int badiproblem=chotiproblem1+chotiproblem2;
    // return badiproblem;

    return fibono(n-1)+fibono(n-2); 
}
int main(){
    int n;
    cin>>n;
    int x=fibono(n);
    cout<<x<<endl;


	return 0;
}