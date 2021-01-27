#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	for(int row=1;row<=n;row++){
		char ch='A';
		//charcters in increasing order
		for(int i=0;i<n-row+1;i++){
			cout<<ch;
			ch++;
		}
		ch--;


		//characters in decreasing order
		for(int i=0;i<n-row+1;i++){
			
			cout<<ch;
			ch--;
		}
		cout<<endl;



	}
	return 0;
}