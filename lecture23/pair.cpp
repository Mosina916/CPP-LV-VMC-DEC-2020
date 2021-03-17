#include<iostream>
using namespace std;
class Pair{
public:
	int a;
	int b;

	// constructor
	Pair(int a,int b){
		this->a=a;
		this->b=b;

	}
	bool operator<(Pair &y){
		if(a<y.a&&b<y.b){
			return true;
		}
		else{
			return false;
		}
	}



};
int main(){
	Pair x(10,20);
	Pair y(15,30);

	if(x<y){
		cout<<"x is less than y"<<endl;
	}
	else{
		cout<<"x is grester "<<endl;
	}

	cout<<x.a<<" "<<x.b<<endl;



	// int x=10,y=30;
	// if(x<y){
	// 	cout<<"x is less "<<endl;
	// }
	// else{
	// 	cout<<"x is grester "<<endl;
	// }



	return 0;
}