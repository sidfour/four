#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
bool compare(int a,int b){
	return (a>b);
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
int p[size],c[size];
while(1){
	cin>>n;
	if(n==0)
	return 0;
	
	loop(i,n)
	cin>>c[i];
	loop(i,n)
	cin>>p[i];
	sort(c,c+n);
	sort(p,p+n,compare);
	ll ans=0;
	loop(i,n)
	ans+=1ll*p[i]*c[i];
	cout<<ans<<endl;
	
}

return 0;
}


