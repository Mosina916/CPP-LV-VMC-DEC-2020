#include<iostream>
using namespace std;
int Nstairs(int n){ //k 3
	// Base Case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// recursive case
	return Nstairs(n-1)+Nstairs(n-2)+Nstairs(n-3);
	
	


}
int solvenstairs(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=solvenstairs(n-i,k);
	}
	return ans;

}
int main(){
	int n;
	cin>>n;
	cout<<Nstairs(n)<<endl;
	int k;
	cin>>k; //3
	cout<<solvenstairs(n,k);


	return 0;
}