#include<iostream>
using namespace std;
char keys[10][10]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
int cou=0;
void phonekeypad(char inp[],int i,char out[],int j){
	// Base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		cou++;

		return;
	}


	// Recursive case
	// '23\0'-->2 extract
	int digit=inp[i]-'0';//'2' abc
// 3->DEF\0
	for(int k=0;keys[digit][k]!='\0';k++){
		out[j]=keys[digit][k];
		phonekeypad(inp,i+1,out,j+1);





	}
}
int main(){
	char inp[100];
	cin>>inp;
	char out[100];
	phonekeypad(inp,0,out,0);
	cout<<endl;
	cout<<cou<<endl;


	return 0;
}