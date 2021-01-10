#include<iostream> //hederfile
using namespace std; // we are using standard namespace 
int main(){ 
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a>=c){
        cout << "a is largest with value:"<<a<<endl;
    }
    else if(b>=a&&b>=c){
        cout << "b is largest with value:"<<b<<endl;
    }
    else{
        cout << "c is largest with value:"<<c<<endl;

    }

 
    return 0; //exit
}