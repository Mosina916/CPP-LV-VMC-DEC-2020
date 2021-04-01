#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> q;
	// q.push(1);
	// q.push(2);
	// q.push(3);
	// q.push(4);
	// q.push(5);
	// q.push(3);
	// q.push(4);
	// q.push(5);
	// q.push(3);
	// q.push(4);

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin>>temp;
		q.push(temp);
		/* code */
	}

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;



	return 0;
}