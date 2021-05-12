#include<iostream>
#include<cstring>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
#define pb push_back
template<typename T>
// generic
class Graph{
	// unordered_map<string,list<string> >h;
	unordered_map<T,list<T> >h;
void dfshelper(T src,unordered_map<T,bool> &visited){


		visited[src]=true;
		cout<<src<<" ";
		for(auto c: h[src]){
			if(!visited[c]){
				dfshelper(c,visited);
			}
		}

	}
public:
	// void addEdge(T u,T v,bool bidir=false){
	void addEdge(T u,T v,bool bidir=true){
		h[u].pb(v);
		if(bidir){
			h[v].pb(u);
		}

	}
	void printlist(){
		for(auto node:h){
			// node-->key value
			cout<<node.first<<" : ";
			for(auto neighbour:node.second){
				cout<<neighbour<<" ";
			}
			cout<<endl;


		}
		cout<<endl;

	}
	
	void dfs(T src){
		int comp=1;

		unordered_map<int,bool> visited;
		dfshelper(src,visited);
		for(auto node :h){
			if(!visited[node.first]){
				dfshelper(node.first,visited);
				comp++;
			}
		}
		cout<<endl;
		cout<<"total no of components are "<<comp<<endl;
	}
	

};
int main(){
	Graph<int> g;
	

	// int ne,nn;
	// cin>>nn>>ne;
	
	// for(int i=0;i<ne;i++){
	// 	int u,v;
	// 	cin>>u>>v;
	// 	g.addEdge(u,v);

	// }

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(3, 4);
	g.addEdge(3, 2);
	g.addEdge(3, 5);

	g.addEdge(11, 12);
	g.addEdge(13, 12);
	g.addEdge(14, 12);
	 // g.printlist();


	g.addEdge(114, 115);
	g.addEdge(114, 116);
	g.addEdge(114, 117);

	g.addEdge(1140, 1150);
	



	 
	 // g.dfs(0,visited);
	 g.dfs(0);


	 // cout<<g.sssp(0,36)<<endl;

	return 0;
}