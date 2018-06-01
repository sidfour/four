#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
ll gcd(ll a,ll b){
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,t,g,ans;
cin>>t;
	while(t--){
		ans=0;
		cin>>a>>b;
		g=gcd(a,b);
		b=sqrt(g);
		loop1(i,b){
			if(g%i==0)
			ans+=2;
		}
		if(b*b==g)
		ans--;
		
		cout<<ans<<endl;
		
	}
return 0;
}


