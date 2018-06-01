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
int t,n,m,x;
cin>>t;
int mmax,gmax;
while(t--){
	mmax=-1;
	gmax=-1;
	cin>>n>>m;
	loop(i,n){
		cin>>x;
		if(gmax<x)
		gmax=x;
		
	}
	loop(i,m){
		cin>>x;
		if(mmax<x)
		mmax=x;
	}
	if(gmax>=mmax)cout<<"Godzilla\n";
	else
	cout<<"MechaGodzilla\n";
}
return 0;
}


