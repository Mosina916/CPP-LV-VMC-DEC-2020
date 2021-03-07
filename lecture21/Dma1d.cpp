#include<iostream>
using namespace std;
int main(){
	// int a=10;

	// primitive data type -->DMA

	int *aptr=new int;
	*aptr=50;
	cout<<*aptr<<endl;

	float *fptr=new float;
	*fptr=14.11;
	cout<<*fptr<<endl;


	// 1D Arrays 
	int arr[100];
	int *arrptr=new int[100];

	for (int i = 0; i < 5; ++i)
	{
		cin>>*(arrptr+i); //arr[i]
		/* code */
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<*(arrptr+i)<<" "<<arrptr[i]<<endl; //arr[i]
		// cout<arrptr[i]<<" "; //arr[i]
		/* code */
	}
	cout<<endl;



// primitive data type delete-->DMA
	delete aptr;
	aptr=NULL;

	delete fptr;
	fptr=NULL;


	// Array delete

	delete []arrptr;
	arrptr=NULL;




	return 0;
}