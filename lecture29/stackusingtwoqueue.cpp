#include<iostream>
#include<queue>
using namespace std;

class Stack{
	queue<int>q1;
	queue<int>q2;
	
public:
	
	void push(int d){
		if(q1.empty()&&q2.empty()){
			q1.push(d);

		}
		else if(!q1.empty()&&q2.empty()){
			q1.push(d);

		}
		else{
			q2.push(d);

		}

	}
	void pop(){
		if(!q1.empty()&&q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();

		}
		else if(q1.empty()&&!q2.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
		else{
			cout<<"underflow -->there is no element to be popped"<<endl;
		}

	}
	int top(){
		if(!q1.empty()&&q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			int ans=q1.front(); //4
			q2.push(ans);
			q1.pop();
			return ans;	

		}
		else if(q1.empty()&&!q2.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			int ans=q2.front(); //4
			q1.push(ans);
			q2.pop();
			return ans;
		}
		else{
			cout<<"underflow "<<endl;
		}


	}
	bool empty(){
		return q1.empty()&&q2.empty();
	}


};
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	// cout<<s.q1.front()<<endl;


	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;


	return 0;
}