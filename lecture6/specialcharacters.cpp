#include<iostream>
using namespace std;
int main(){

	int numbers=0,alphabets=0,whitespaces=0,specialsymbols=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		if(ch>='0'&&ch<='9'){
			numbers++;

		}
		else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
			alphabets++;
		}
		else if(ch==' '||ch=='\n'||ch=='\t'){
			whitespaces++;
		}
		else{
			specialsymbols++;

		}
		ch=cin.get();
	}
	cout<<"total number of numbers are : "<<numbers<<endl;
	cout<<"total number of alphabets are : "<<alphabets<<endl;
	cout<<"total number of whitespaces are : "<<whitespaces<<endl;
	cout<<"total number of specialsymbols are : "<<specialsymbols<<endl;

	return 0;
}