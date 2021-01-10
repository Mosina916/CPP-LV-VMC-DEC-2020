#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	while(rowno<=n){


		//spaces print

		int col=1;
		int spaces=n-rowno;
		while(col<=spaces){
			cout<<" "<<'\t';
			col=col+1;
		}

		//nos in increasing order


		int i=1;
		int val=rowno;
		while(i<=rowno){
			cout<<val<<'\t';
			i=i+1;
			val=val+1;
		}


		//nos in decreasing order
		int k=1;
		int sval=(2*rowno)-2;

		while(k<=rowno-1){
			cout<<sval<<'\t';
			sval--;

			k++;
		}

		cout<<endl;








		rowno=rowno+1;


	}

	return 0;




}