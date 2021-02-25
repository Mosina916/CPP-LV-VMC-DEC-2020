#include<iostream>
using namespace std;

void dec(int n){

    //base case 
    if(n==0){
        return;

    }

    // if(n==1){
    //     cout<<1<<endl;
    //     return;

    // }



    // recursive

    cout<<n<<endl;
    dec(n-1);

}

void inc(int n){

     //base case 
    if(n==0){
        return;

    }



    // recursive
     inc(n-1);
    cout<<n<<endl;
   


}


int main(){

    int n;
    cin>>n;
    dec(n); //n---1

    cout<<"increment is : "<<endl;

    inc(n);

   
	return 0;
}