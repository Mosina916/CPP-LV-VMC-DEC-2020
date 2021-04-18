#include<iostream>
#include <vector>
using namespace std;
class Minheap{
private:
	void heapify(int i){
		int min_index=i;
		int left=2*i;
		int right=2*i+1; //left +1
		if(left<v.size()&&v[min_index]>v[left]){
			min_index=left;
		}
		if(right<v.size()&&v[min_index]>v[right]){
			min_index=right;
		}
		if(min_index!=i){
			swap(v[i],v[min_index]);
			heapify(min_index);
		}
	}


public:
	vector<int> v;
	Minheap(){
		v.push_back(-1);
	}
	void push(int data){
		v.push_back(data);
		int c=v.size()-1;
		int p=c/2;
		while(c>1&&v[p]>v[c]){
			swap(v[p],v[c]);
			c=p;
			p=p/2;
		}
	}
	int top(){
		return v[1];
	}
	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}
	bool empty(){
		return v.size()==1;
	}

};
int main(){
	Minheap h;
	h.push(1);
	h.push(4);
	h.push(14);
	h.push(24);
	h.push(40);
	h.push(-4);
	h.push(3);
	h.push(20);
	h.push(13);
	h.push(5);
	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}
	cout<<endl;




	return 0;
}