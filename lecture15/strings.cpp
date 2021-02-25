#include <iostream>
#include<cstring>
using namespace std;
int main() {
    //STRING INITILIZATION AND DECLERATION
    string s;
    // cin>>s;
    getline(cin,s);

    cout<<s<<endl;
    cout<<s.substr(3,7)<<endl; //3 k nbaad 7 characters
    cout<<s.substr(1)<<endl; //ignores ist character
    

    string s1="hello world";
    cout<<s1<<endl;

     string s2("hello world");
         cout<<s2<<endl;
     char a[]="coding blocks";
     cout<<a<<endl;
     string st(a);

     cout<<st<<endl;

     cout<<st.length()<<endl;

     string a1,a2;
     a1="hello",a2="mosina"; //concatenationm
     a1+=a2;
     cout<<a1<<endl;
     cout<<a2<<endl;

     if(a1>a2){
         cout<<a1<<endl;

     }
     else{
         cout<<a2<<endl;
     }






    return 0;
}
