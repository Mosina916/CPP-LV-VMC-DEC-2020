#include<iostream>
using namespace std;
class Vector{
public:
	int *arr;
	int ms;
	int cs;
	// constructor
	Vector(int s=2){ //default argument
		ms=s;
		cs=0;
		arr=new int[ms];
	}
	void push_back(int data){
		if(ms==cs){
			int *oldarr=arr;
			int oldms=ms;
			arr=new int[2*ms];
			ms*=2;
			//purani array k elements ko copy kiya
			for(int i=0;i<oldms;i++){
				arr[i]=oldarr[i];
			}
			delete[] oldarr;
		}


		arr[cs]=data;
		cs++;


	}
	void pop_back(){
		if(cs>0){
			cs--;
		}

	}
	int size(){
		return cs;

	}
	int capacity(){
		return ms;

	}
	int operator[](int i){
		return arr[i];

	}

};
int main(){

	Vector v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(5);
	v.push_back(7);
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(5);
	v.push_back(7);
	cout<<"size of vector is "<<v.size()<<endl;
	cout<<"capacity of vector is "<<v.capacity()<<endl;
	v.pop_back();
	v.pop_back();
	v.pop_back();

	// cout<<"size of vector is "<<v.size()<<endl;
	// cout<<"capacity of vector is "<<v.capacity()<<endl;


	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	return 0;
}