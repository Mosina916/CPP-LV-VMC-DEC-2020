#include<iostream>
#include<list> //cpp refrence list
using namespace std;
class Graph{
public:
	list<int> *l; //pointer address of array -->list
	int n;
	// constructor
	Graph(int N){
		n=N;
		l=new list<int>[N];
	}

	void addedge(int u,int v,int bidir=true){
		l[u].push_back(v);
		if(bidir){
			l[v].push_back(u);
		}
	}


	void print(){
		for(int i=0;i<n;i++){
			cout<<i<<"-->";
			for(auto n:l[i]){
				cout<<n<<" ";
			}
			cout<<endl;
		}
		cout<<endl;

	}


};

int main(){
	int ne,nn;
	cin>>nn>>ne;
	Graph g(nn);
	for(int i=0;i<ne;i++){
		int u,v;
		cin>>u>>v;
		g.addedge(u,v);

	}
	g.print();



	

	

	return 0;
}