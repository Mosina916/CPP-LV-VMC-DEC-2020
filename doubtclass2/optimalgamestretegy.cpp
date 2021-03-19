#include<iostream>
using namespace std;
#define ll long long int
int coins[40];
ll optimalgamestretegy(int i,int j){
	// Base case
	if(i>j){
		return 0;
	}

	// Recursive case

	// case 1 //piyush
	// 4 1 3 2 //number->index 4->0  1->1 3->2 2->3
	ll firstpick=coins[i]+min(optimalgamestretegy(i+2,j),optimalgamestretegy(i+1,j-1));


	// case 2
	// 1 2 3
	ll lastpick=coins[j]+min(optimalgamestretegy(i,j-2),optimalgamestretegy(i+1,j-1));

	return max(firstpick,lastpick);
}

int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>coins[i];
		
	}
	cout<<optimalgamestretegy(0,n-1)<<endl;
	
	return 0;
}