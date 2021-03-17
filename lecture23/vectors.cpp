#include<iostream>
#include <vector>
using namespace std;

int main(){
	 // syntax


	// vector<datatype> vectoraname;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);


// 	vector<int> v(10); //10 buckets get created and initilized with 0
// 	// v.push_back(1);
// 	// v.push_back(2);
// 	// v.push_back(3);
// 	// v.push_back(4);
// 	// v.push_back(5);
// // 	for (int i = 0;i<12; ++i)
// // {
// // 	cout<<v[i]<<" ";
// // 	/* code */
// // }
// cout<<endl;

// 	// cout<<"size of vector is "<<v.size()<<endl;
// 	// cout<<"capacity of vector is "<<v.capacity()<<endl;


// // for (int i = 0; i < v.size(); ++i)
// // {
// // 	cout<<v[i]<<" ";
// // 	/* code */
// // }
// cout<<endl;


// for (int i = 0; i < 10; ++i)
// {
// 	cin>>v[i];
// 	/* code */
// }

// for (int i = 0; i < 10; ++i)
// {
// 	cout<<v[i]<<" ";
// 	/* code */
// }
// cout<<endl;


	cout<<"size of vector is "<<v.size()<<endl;
	cout<<"capacity of vector is "<<v.capacity()<<endl;


	v.pop_back();
	v.pop_back();
	v.pop_back();



	cout<<"size of vector is "<<v.size()<<endl;
	cout<<"capacity of vector is "<<v.capacity()<<endl;





	



	return 0;
}