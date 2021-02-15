#include <iostream>
using namespace std;
int main()
{

	//initialization
	// char arr[]={'A','b','c','D','\0'};
	// char arr1[]={'A','b','c','D','\0'};
	// cout<<arr<<endl; //value
	// cout<<arr1<<endl;

	// char arr2[]="abcd"; //contains by default the null
	// cout<<arr2<<endl;


	// int a[]={1,2,3}; //a is internal pointer and will give you address
	// cout<<a<<endl;


	// char arr3[100];
	// cin>>arr3;
	// cout<<arr3<<endl;


	// char arr4[100];
	// char ch;
	// ch=cin.get(); //1 value at 1 time ->and returns it
	// int i=0;
	// while(ch!='\n'){ // \n is the by default delimiter
	// 	arr4[i]=ch;
	// 	i++;
	// 	ch=cin.get();



	// }
	// cout<<arr4<<endl;




	// inbuild  function

	// char arr6[100];
	// cin.getline(arr6,100); //paragraph 
	// // cout<<arr6<<endl;

	// // printing array 

	// for(int i=0;arr6[i]!='\0';i++){
	// 	cout<<arr6[i];
	// }
	// cout<<endl;


	// char arr9[9]="codingbl";
	// cout<<arr9<<endl;


	char arr6[100];
	cin.getline(arr6,100,'?'); //paragraph 
	cout<<arr6<<endl;














	return 0;
}