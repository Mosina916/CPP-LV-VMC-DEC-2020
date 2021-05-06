#include<iostream>
#include<list> //cpp refrence list
using namespace std;

int main(){
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	for(auto node: l){
		cout<<node<<" ";
	}
	cout<<endl;

	

	return 0;
}