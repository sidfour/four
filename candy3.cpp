#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
unsigned ll n,t;
unsigned ll ans,temp;

	cin>>t;
	while(t--){
		ans=0;
		temp=0;
		cin>>n;
		
		loop(i,n) {
		cin>>temp;
		ans=(ans+temp)%n;}
		
		if(ans==0)cout<<"YES\n";
		else cout<<"NO\n";
		
	}
return 0;
}


