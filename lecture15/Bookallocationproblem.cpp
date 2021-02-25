#include<iostream>
using namespace std;

bool isvalid(int books[],int n,int k,int ans){
int student=1,i;
int current=0;
for(i=0;i<n;i++){
if(current+books[i]>ans){
    current=books[i];
    student++;
    if(student>k){
        return false;
    }

}
else{
    current+=books[i];
}
}
return true;
}

int binarysearchbooks(int books[],int n,int k){
    int total_pages=0;
    int s=0,e=0;
    for(int i=0;i<n;i++){
        total_pages+=books[i];
        s=max(s,books[i]);
    }
    e=total_pages;
    int finalans=s;
    while(s<=e){
        int mid=(s+e)/2;
        if(isvalid(books,n,k,mid)){
            finalans=mid;
            e=mid-1;

        }
        else{
            //right part
            s=mid+1;
        }

    }
    return finalans;
}
int main(){
    int n;
    int k,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    int books[100005];
    for(int i=0;i<n;i++){
        cin>>books[i];
    }
    cout<< binarysearchbooks(books,n,k)<<endl;
    }return 0;

}