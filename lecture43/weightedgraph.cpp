#include<iostream>
#include<cstring>
#include<unordered_map>
#include<list>
#include<set>
#include<queue>
using namespace std;
#define pb push_back
#define mp make_pair
template<typename T>
class Graph{
	unordered_map<T,list<pair<T,int> > > h;
public:
	void addEdge(T src,T des,int dist,bool bidir=true){
		h[src].pb(mp(des,dist));
		if(bidir){
			h[des].pb(mp(src,dist));

		}

	}
	void printlist(){
		for(auto node:h){
			cout<<node.first<<" : ";
			for(auto neighbour:node.second){
				cout<<"("<<neighbour.first<<" "<<neighbour.second<<") , ";
			}
			cout<<endl;

		}
	}
	int dijkstra(T src,T des){
		unordered_map<T,int>distance;
		for(auto node:h){
			distance[node.first]=INT_MAX;
		}

		distance[src]=0;
		unordered_map<T,T> p;
		p[src]=src;
		set<pair<int,T> >s;
		s.insert(mp(0,src));
		while(!s.empty()){

		auto node=*(s.begin()); //6,d
		s.erase(s.begin());
		int parentDist=node.first; //6
		T parent=node.second; //d
		for(auto children:h[parent]){ //(,3)
			int edgeDist=children.second;//3
			if(distance[children.first]>parentDist+edgeDist){ 
				auto f=s.find(mp(distance[children.first],children.first));

				if(f!=s.end()){
					s.erase(f);

				}
				p[children.first]=parent;

				distance[children.first]=parentDist+edgeDist;// D[C]=3;
				s.insert(mp(distance[children.first],children.first));//3,C


			}

		}

		}
		// for(auto node: distance){
		// 	cout<<"minimum distance of "<<node.first<<" from src is "<<node.second<<endl;

		// }
		// cout<<endl;

auto temp=des;

while(temp!=src){
	cout<<temp<<"<--";
	temp=p[temp];
}
cout<<temp<<" "<<endl;
return distance[des];






	}
};

int main(){
	Graph<string> g;
	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);
	g.addEdge("Jaipur", "Mumbai", 8);
	g.printlist();
	cout<<g.dijkstra("Amritsar","Delhi")<<endl;

	
	return 0;
}