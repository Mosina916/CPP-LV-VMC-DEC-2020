#include<iostream>
#include<unordered_map>
using namespace std;
class node{
public:
	char data;
	bool isterminal;
	unordered_map<char,node*> h;
	// constructor
	node(char ch){
		data=ch;
		isterminal=false;//by default false kardiya 

	}
};
class Trie{
	node*root;
public:
	Trie(){
		root=new node('\0');

	}
	void insert(char *word){
		node*temp=root;
		for(int i=0;word[i];i++){
			char ch=word[i];
			// agar exist karta hai -->result 1
			//h.count(ch)-->check whether ch currently i is at is present in the hashmap or not
			if(temp->h.count(ch)){
				temp=temp->h[ch];

			}
			// agar exist karta hai -->result 0
			else{
				temp->h[ch]=new node(ch);
				temp=temp->h[ch];

			}

		}
		temp->isterminal=true;

	}
	bool search(char *key){
		node*temp=root;
		for(int i=0;key[i];i++){
		char ch=key[i];
		if(temp->h.count(ch)){
			temp=temp->h[ch];

		}
		else{
			return false;

		}

		}
		return temp->isterminal;
		// if(temp->isterminal==true){
		// 	return true;
		// }
		// return false;

	}


};
int main(){
	Trie t;
	char arr[100]="hello";
	t.insert(arr);
	t.insert("hello world");
	t.insert("coder");
	t.insert("coding");
	t.insert("hell");
	while(1){
		char key[100];
		cin.getline(key,100);
		// cin>>key;


		if(t.search(key)){
		cout<<"word is present"<<endl;
	}
	else{
		cout<<"word is not present"<<endl;

	}


	}
	


	return 0;
}