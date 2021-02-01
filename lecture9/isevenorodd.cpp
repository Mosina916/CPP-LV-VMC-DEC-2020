#include <iostream>
using namespace std;

//function decleration
void isevenorodd(int n){
	if(n%2==0){ //function definition
		cout<<n <<" is even"<<endl;
	}
	else{
		cout<<n <<" is odd"<<endl;

	}

}



int main(){


	//isevenorodd

	int no;
	cout<<"enter number"<<endl;
	cin>>no;
	
	// isevenorodd(n);
	isevenorodd(no); //function calling/invoking

	// cin>>n;
	// isevenorodd(n);

	// cin>>n;
	// isevenorodd(n);


	// cin>>n;
	// if(n%2==0){
	// 	cout<<n <<" is even"<<endl;
	// }
	// else{
	// 	cout<<n <<" is odd"<<endl;

	// }

	// cin>>n;
	// if(n%2==0){
	// 	cout<<n <<" is even"<<endl;
	// }
	// else{
	// 	cout<<n <<" is odd"<<endl;

	// }




	return 0;
}