#include <iostream>
using namespace std;

// int length(char a[])
int length(char *a){
	int i=0;
	int co=0;
	while(a[i]!='\0'){
		co++;
		i++;
	}

	return co;
}

bool ispalinornot(char *a){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		j--;
		i++;
	}
	return true;

}
int main()
{
	char a[100];
	cin>>a;
	// cin.getline(a,100);
	// cout<<"length of array is "<<length(a)<<endl;
	

	if(ispalinornot(a)){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}







	return 0;
}