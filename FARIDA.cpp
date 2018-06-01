#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 10000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a[size];
int t;
cin>>t;
int n;
	loop1(j,t){
	cin>>n;
	loop(i,n){
		cin>>a[i];
	}	
	if(n>2)
	a[1]=max(a[0],a[1]);
	for(int i=2;i<n;i++){
		a[i]=max(a[i-1],a[i-2]+a[i]);
	}
	cout<<"Case "<<j<<": "<<a[n-1]<<endl;
	}
return 0;
}


