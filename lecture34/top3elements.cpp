#include<iostream>
#include <vector>
#include<queue>
using namespace std;
#define Minheap priority_queue<int,vector<int> ,greater<int> >
void printheap(Minheap h){
	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}
	cout<<endl;

}

int main(){
	// Minheap h;
	
	Minheap h;  //min heap

	int count=0;
	int k=3;
	int n;
	while(1){
		cin>>n;
		if(n==-1){
			printheap(h);
		

		}
		else{
			if(count<k){
				h.push(n);
				count++;
			}
			else{
				if(h.top()<n){
					h.pop();
					h.push(n);
				}
			}
		}


	}


	return 0;
}