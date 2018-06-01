#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[1001],b[1001];
int n,t;
	cin>>t;
	ll ans;
	while(t--){
		ans=0;
		cin>>n;
		loop(i,n)cin>>a[i];
		loop(i,n)cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		loop(i,n)ans+=a[i]*b[i];
		cout<<ans<<endl;
	}

return 0;
}


