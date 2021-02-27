#include<iostream>
using namespace std;
int countdigits(int no){
	int cou=0;
	while(no!=0){
		cou++;
		no=no/10;

	}
	return cou;
}
int main(){
	int t;
	int arr[200]={0};
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			/* code */
		}
		for(int i=0;i<=n-2;i++){
			for(int j=0;j<=n-2-i;j++){
				int a=arr[j];
				int b=arr[j+1];
				int digitcounta=countdigits(a);
				int digitcountb=countdigits(b);

				long long int no1=a*pow(10,digitcountb)+b;
				long long int no2=b*pow(10,digitcounta)+a;
				if(no1>no2){
					swap(arr[j],arr[j+1]);
				}

			}
		}
		for(int i=n-1;i>=0;i--){
			cout<<arr[i];
		}
		cout<<endl;


	}



	return 0;
}