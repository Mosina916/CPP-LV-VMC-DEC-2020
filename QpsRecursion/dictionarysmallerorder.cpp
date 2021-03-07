#include<iostream>
#include<algorithm>
using namespace std;
string s1;
void dictionaryorder(string in,string out){
	// Base Case
	if(in.length()==0){
		if(out<s1){
			cout<<out<<endl;

		}
		return;


	}


	// Recursive case

	for(int i=0;i<in.length();i++){
		string chotistring=in.substr(0,i)+in.substr(i+1);
		dictionaryorder(chotistring,out+in[i]);
	}
}

int main(){
	string s; //cab
	cin>>s;
	s1=s;
	sort(s.begin(),s.end()); //s-->abc
	// cout<<s<<endl;
	dictionaryorder(s," ");

	// cout<<s.substr(0,1)+s.substr(2)<<endl;


	return 0;
}