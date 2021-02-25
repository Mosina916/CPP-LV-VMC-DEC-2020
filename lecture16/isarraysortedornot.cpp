#include<iostream>
using namespace std;
bool issortedornot(int *a,int n){

    //base case
    if(n==1){
        return true;
    }


    // Recursive case
    bool issor=issortedornot(a+1,n-1);
    if(a[0]<a[1]&&issor==true){
        return true;

    }
    return false;


}

int main(){
    int a[]={1,9,4,5,8,9,10};
    int n=sizeof(a)/sizeof(int);
   if(issortedornot(a,n)){
       cout<<"Array is sorted"<<endl;
   }
   else{
       cout<<"array is not sorted"<<endl;
   }




	return 0;
}