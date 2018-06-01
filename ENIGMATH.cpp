#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
ll gcd(ll a,ll b){
	if(b==0) return a;
	else  return gcd(b,a%b);
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,g;
int t;
cin>>t;
while(t--){
	cin>>a>>b;
	g=gcd(a,b);
	g=(a*b)/g;
	cout<<g/a<<" "<<g/b<<endl;
}
return 0;
}


