#include<iostream> //hederfile
using namespace std; // we are using standard namespace 
int main(){ 

    int a;
    cin>>a;
    if(a>=50&&a<=60){
        cout << "a>=50&&a<=60"<<endl;

    }
    else if (a>=60&&a<=70)
    {
         cout << "a>=60&&a<=70"<<endl;
        
    }
    else if(a>=60&&a<=100){
        cout << ">=60||a<=100"<<endl;

    }
    else{
         cout << "A is not greater than 50"<<endl;


    }
    
    return 0; //exit
}