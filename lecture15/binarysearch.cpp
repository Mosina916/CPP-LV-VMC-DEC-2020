#include <iostream>
#include<cstring>
using namespace std;
int binarysearch(int *a,int n,int key){

    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]>key){
            e=mid-1;
        }
        else if(a[mid]==key){
            return mid;
        }
        else{
            s=mid+1;
        }

    }
    return -1;
}
int main() {

    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int x=binarysearch(a,n,key);
    if(x==-1){
        cout<<"key not found"<<endl;

    }
    else{
        cout<<"key found at index "<<x<<endl;
    }


    return 0;
}
