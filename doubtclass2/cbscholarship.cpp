#include<iostream>
using namespace std;
#define ll long long int
ll n,m,x,y; //n->total students ,m-> no of copons  ,x->copons required to get 100% sch
bool kyamaimidnoofstudentskoscholarshipdepaarahi(int ans){
	return (ans*x<=m+(n-ans)*y);

}

int main(){
	
	cin>>n>>m>>x>>y;//y-->copons return if you don't perform well

	int si=0;
	int ei=n;
	int ans=0;
	while(si<=ei){
		int mid=(si+ei)/2;
		if(kyamaimidnoofstudentskoscholarshipdepaarahi(mid)){
			ans=mid;
			si=mid+1;

		}
		else{
			ei=mid-1;
		}

	}
	cout<<ans<<endl;

	


	return 0;
}