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
public:
	// void addEdge(T u,T v,bool bidir=false){
	void addEdge(T u,T v,bool bidir=false){
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
	void bfs(T start){
		queue<T> q;
		unordered_map<T, bool> visited;
		q.push(start);
		visited[start]=true;
		unordered_map<T,int> distance;
		distance[start]=0;

		while(!q.empty()){
			T node=q.front();
			q.pop();
			cout<<node<<" ";
			for(auto children:h[node]){
				if(!visited[children]){
					q.push(children);
					visited[children]=true;
					distance[children]=distance[node]+1;
				}

			}

		}
		cout<<endl;
		for(auto temp:distance){
			cout<<"min distance of "<<temp.first<<" from 0 is  " <<temp.second<<endl;
		}
	}


	int sssp(T start,T des){
		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T,T> parent;
		q.push(start);
		visited[start]=true;
		unordered_map<T,int> distance;
		distance[start]=0;
		parent[start]=0;

		while(!q.empty()){
			T node=q.front();
			q.pop();
			// cout<<node<<" ";
			for(auto children:h[node]){
				if(!visited[children]){
					q.push(children);
					visited[children]=true;
					distance[children]=distance[node]+1;
					parent[children]=node;
				}

			}

		}
		// cout<<endl;
		// for(auto temp:distance){
		// 	cout<<"min distance of "<<temp.first<<" from 0 is  " <<temp.second<<endl;
		// }
		T temp=des;//5
		while(temp!=parent[temp]){
			cout<<temp<<"<--"; //5 3 4
			temp=parent[temp]; //3 4 0

		}
		cout<<temp<<endl;

		return distance[des];
	}

};
int main(){
	// Graph<string> g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	// g.printlist();

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	// int ne,nn;
	// cin>>nn>>ne;
	
	// for(int i=0;i<ne;i++){
	// 	int u,v;
	// 	cin>>u>>v;
	// 	g.addEdge(u,v);

	// }
	//  g.printlist();
	for(int u=0;u<36;u++){
		for(int dice=1;dice<=6;dice++){
			int v=u+dice+board[u+dice]; // u 3 dice 2
				g.addEdge(u,v);

		}
	}
	 // cout<<"bfs : ";
	 // g.bfs(0);

	 cout<<g.sssp(0,36)<<endl;







	return 0;
}