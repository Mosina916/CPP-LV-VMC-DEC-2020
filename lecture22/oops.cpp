#include<iostream>
#include<cstring>
using namespace std;

// blueprint 
class car{
private: //class k bahar access nahi kar sakti

	int price;
public: //class k bahar access  kar sakte hai
	// char name[100];//static memory allocation
	char *name;
	int modelno;
	int seats;

	// // // default constructor override
	car(){

		cout<<"In default constructor"<<endl;
		cout<<"mosina"<<endl;
		name=NULL;

	}
	// permetrized constructor
	car(char *n,int s,int m,int p){
		cout<<"Inside perametrized constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		seats=s;
		modelno=m;
		price=p;

	}

	//member functions
	void printcar(){
	cout<<"name of car is "<<name<<endl;
	cout<<"price of car is "<<price<<endl;
	cout<<"seats in car are "<<seats<<endl;
	cout<<"modelno of car is "<<modelno<<endl;

	}
	void update(char *n){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(n)+1];
		strcpy(name,n);



	}
	void setprice(int p){
		price=p;
	}
	int Getvalue(){
		return price;
	}



};
int main(){
	// datatype variable-name;

	// whenever object is created cunstructor is called
	car A; //A  is object of class car 
	// A.name="BMW";
	// strcpy(A.name,"BMW");
	A.update("Bmw");





	A.seats=4;
	A.modelno=2020;
	// A.price=50000;
	A.setprice(65000); //setter
	A.update("qwerty");
	// cout<<"price of car is "<<A.price<<endl;

	// cout<<"name of car is "<<A.name<<endl;
	// cout<<"price of car is "<<A.Getvalue()<<endl;
	// cout<<"seats in car are "<<A.seats<<endl;
	// cout<<"modelno of car is "<<A.modelno<<endl;
	// A.printcar();


cout<<endl<<endl;

	car B;
	// strcpy(B.name,"Audi");
	
	B.update("Audi");

	
	B.seats=4;
	B.modelno=2010;
	// B.price=30000;
	B.setprice(30000);

	// cout<<"name of car is "<<B.name<<endl;
	// cout<<"price of car is "<<B.price<<endl;
	// cout<<"seats in car are "<<B.seats<<endl;
	// cout<<"modelno of car is "<<B.modelno<<endl;
	// B.printcar();


		cout<<"price of car is "<<B.Getvalue()<<endl;


	car C("duster",8,2021,600000);

cout<<endl<<endl;
	// cout<<"name of car is "<<C.name<<endl;
	// cout<<"price of car is "<<C.price<<endl;
	// cout<<"seats in car are "<<C.seats<<endl;
	// cout<<"modelno of car is "<<C.modelno<<endl;

// C.printcar();


// getters and setters









	return 0;
}