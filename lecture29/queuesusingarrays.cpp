#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int f;
	int n;
	int e;
	int cs;


public:
	
	Queue(int s=5){
		n=s;
		arr=new int[s];
		f=0;
		e=n-1;
		cs=0;


		
	}

	void push(int d){
		if(cs<n){
		e=(e+1)%n;
		arr[e]=d;
		cs++;

		}
		else{
			cout<<"Queue is full--> overflow"<<endl;

		}	
		
		
	}
	void pop(){
		if(cs>0){
		f=(f+1)%n;
		cs--;

		}
		else{
			cout<<"queue is empty-->underflor"<<endl;
		}


	}
	int front(){
		return arr[f];
		

	}
	bool empty(){
		return cs==0;
		
	}
	int size(){
		return cs;
		

	}
};
int main(){
	Queue q(7);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(3);
	q.push(4);

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;



	return 0;
}