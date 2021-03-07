#include<iostream>
using namespace std;
int* f(int n){
 	int *arr=new int[1000];
 	for (int i = 0; i < n; ++i)
	{
		cin>>*(arr+i); //arr[i]
		/* code */
	}
	return arr;



 }
int main(){
	int n;
	cin>>n;

	int*aptr=f(n);



	for (int i = 0; i < n; ++i)
	{
		cout<<aptr[i]<<" "; //same as *(arr+i)
		/* code */
	}
	cout<<endl;
	delete a;
	a=NULL;

	delete[] aptr;
	aptr=NULL










	return 0;
}