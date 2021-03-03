#include<iostream>
using namespace std;
string stringmaixkopeechelejao(string s){
	// base case
	if(s.length()==0){
		string x="";
		return x;
	}

	// recursive case
	// xabxxaccccb
	string a=s.substr(0,1); //pehla character lega
	string chotistring=stringmaixkopeechelejao(s.substr(1));//abxxaccccb-->abaccccbxx
	if(a=="x"){
		string badisting=chotistring+a;
		return badisting;

	}
	else{
		string badisting=a+chotistring;
		return badisting;

	}


}

int main(){
	string s;
	cin>>s;

	string x=stringmaixkopeechelejao(s);
	cout<<"string after moving all x at end is : "<<x<<endl;



	return 0;
}