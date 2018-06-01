#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
ull rem(ull b){
	ll a=1,y=34;
	while(b>0){
		if(b&1)
		a=(a*y)%11;
		y=(y*y)%11;
		b/=2;
	}
	return a;
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

	ull n,ans;
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	ans=rem(n);
	ans=(ans+(30*n%11)%11+32)%11;
	loop(i,11){
		if((ans+i)%11==0){cout<<i<<endl;
		}
	}
}
return 0;
}


