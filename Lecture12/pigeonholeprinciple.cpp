#include<iostream>
using namespace std;
#define ll long long int

ll a[1000005],prefix[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<1000005;i++){
			prefix[i]=0;

		}
		ll sum=0;
		prefix[0]=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
			sum=sum%n;
			sum=(sum+n)%n; //negative values 
			prefix[sum]++;

		}
		ll ans=0;
		for(int i=0;i<n;i++){
			ll no=prefix[i];
			ans+=(((no)*(no-1))/2);
		}

		cout<<ans<<endl;

	}
	return 0;
}