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
int main()
{
	char a[100];
	// cin>>a;
	cin.getline(a,100);
	cout<<"length of array is "<<length(a)<<endl;







	return 0;
}