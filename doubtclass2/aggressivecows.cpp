#include<iostream>
using namespace std;
bool amiabletoplaceatcowsdistanceofmid(int *arr,int n,int dis,int tc){


	int cp=1; //cows placed 
	int prev=arr[0]; //pehli cow at prev

	for(int i=1;i<n;i++){
		if(arr[i]-prev>=dis){
			cp++;
			prev=arr[i];
			if(tc==cp){
				return true;
			}

		}

	}
	if(cp<tc){
		return false;

	}
	 return true;


}

int main(){
	int n,c; //n-->total stalls, c-->total cows

	cin>>n>>c;
	int arr[100000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	sort(arr,arr+n);
	int si=0;
	int ei=arr[n-1];
	int ans=0;
	while(si<=ei){
		int mid=(si+ei)/2;
		if(amiabletoplaceatcowsdistanceofmid(arr,n,mid,c)){
			ans=mid;
			si=mid+1;

		}
		else {
			ei=mid-1;
		}


	}
	cout<<ans<<endl;

	



	return 0;
}