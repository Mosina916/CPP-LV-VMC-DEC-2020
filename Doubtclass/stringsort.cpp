#include<iostream>
using namespace std;

bool compare(string s1,string s2){

	if(s1.length()>=s2.length()&&(s1.substr(0,s2.length())==s2)){
		return true;
		//s1-->rainbow   s2-->rain 4
	}
	else{
		return s1<s2; //dog   rainbow true
		//table ink return false
	}

}

int main(){
	int n;
	cin>>n;
	// string s;
	// cin>>s;
	// string x;
	// cin>>x;
	string arr[1005];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	sort(arr,arr+n,compare);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<endl;
		/* code */
	}

	
	return 0;
}