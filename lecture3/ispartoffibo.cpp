#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ffn=0,sfn=1;
	// if(n==ffn||n==sfn){
	// 	cout<<"yes it is part of fibonacci series"<<endl;
	// 	return 0;
	// }
	int c=ffn+sfn;
	while(c<=n){
		if(c==n){
			cout<<"yes Exists in fibo series"<<endl;
			return 0;
		}
		ffn=sfn;
		sfn=c;
		c=ffn+sfn;
	}
	cout<<"No it is not part of fibo series"<<endl;

	return 0;


}