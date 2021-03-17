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
	int cou;
	const int tyres; //constant data members
	static int co;

	// // // default constructor override
	car():tyres(4){

		cout<<"In default constructor"<<endl;
		cout<<"mosina"<<endl;
		name=NULL;
		co++;

	}
	// permetrized constructor
	// car(char *n,int s,int m,int p):tyres(4),modelno(m),price(p),seats(s){
		car(char *n,int seats,int modelno,int p):tyres(4){
		cout<<"Inside perametrized constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		this->seats=seats;
		this->modelno=modelno;
		price=p;
		co++;

	}

	// copy constructor
	car(car &x):tyres(4){ //in x we have car c

		cout<<"in copy constructor"<<endl;
		// name=x.name;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);

		price=x.price;
		seats=x.seats;

		modelno=x.modelno;
		co++;

	}

	// copy assignment constructor
	void operator=(car x){ //x-->B
		cout<<"in copy Assignment constructor"<<endl;
		// name=x.name;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);

		price=x.price;
		seats=x.seats;

		modelno=x.modelno;

	}





	//member functions
	void printcar()const{ //constant functions
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
		if(p<200){
			price=200;
		}
		else{
			price=p;

		}
		
	}
	int Getvalue() const{
		return price;
	}

// dustuctor
	~car(){
		cout<<"dustuctor for car "<<name<<" called "<<endl;
		delete[] name;
		co--;

	}



};

int car::co=0;
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
	A.setprice(400); 
	A.update("qwerty");
	// cout<<"price of car is "<<A.price<<endl;

	// cout<<"name of car is "<<A.name<<endl;
	// cout<<"price of car is "<<A.Getvalue()<<endl;
	// cout<<"seats in car are "<<A.seats<<endl;
	// cout<<"modelno of car is "<<A.modelno<<endl;
	A.printcar();
	cout<<"No of tyres "<<A.tyres<<endl;


cout<<endl<<endl;

	car B;
	// strcpy(B.name,"Audi");
	
	B.update("Audi");

	
// 	B.seats=4;
// 	B.modelno=2010;
// 	// B.price=30000;
// 	B.setprice(30000);

// 	// cout<<"name of car is "<<B.name<<endl;
// 	// cout<<"price of car is "<<B.price<<endl;
// 	// cout<<"seats in car are "<<B.seats<<endl;
// 	// cout<<"modelno of car is "<<B.modelno<<endl;
// 	B.printcar();


// 		cout<<"price of car is "<<B.Getvalue()<<endl;


// 	car C("duster",8,2021,600000);

// cout<<endl<<endl;
// 	// cout<<"name of car is "<<C.name<<endl;
// 	// cout<<"price of car is "<<C.price<<endl;
// 	// cout<<"seats in car are "<<C.seats<<endl;
// 	// cout<<"modelno of car is "<<C.modelno<<endl;

// C.printcar();


// // getters and setters

car D=C; //car D(C) constructor call-->copy constructor

// D.name[0]='M';
// D.printcar();


// // deep and shallow copy

// D.name[0]='M';

// cout<<endl<<endl;
// C.printcar();

// cout<<endl<<endl;
// D.printcar();

// // copy assignment constructor

car E;
E=A; //operator overoading

// cout<<"car e deatails are"<<endl;

// E.name[0]='u';
E.printcar();
car U=E;
cout<<"total count of cars"<<endl;
cout<<car::co<<endl;















	return 0;
}