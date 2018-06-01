#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
ll totient(ll n){
	ll res=n;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0)
			n/=i;
			res-=res/i;
		}
	}
	if(n>1)
	res-=res/n;
	return res;
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long  n,t;
cin>>t;
while(t--){
	cin>>n;
	cout<<totient(n)<<endl;
}
return 0;
}


