#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,sum=0;cin>>n;
	for(int t,i=1;i<=n;i++){
		cin>>t;
		int ans=i*t-sum;
		cout<<ans<<' ';
		sum=sum+ans;
	}
	
}
