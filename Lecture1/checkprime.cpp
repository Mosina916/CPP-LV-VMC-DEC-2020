#include<iostream> //hederfile
using namespace std; // we are using standard namespace 
int main(){ 
    int n;
    cin>>n;
    int i=2; //initialization

    while (i<=n-1) //condition
    {

        if(n%i==0){
            cout<<"not prime"<<endl;
            exit(0);


        }
        i=i+1;

        
    }

    cout<<"prime"<<endl;





    // if(i==n){
    //     cout<<"prime"<<endl;

    // }


    
    

 
    exit(0); //exit
}