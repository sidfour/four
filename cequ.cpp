#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int gcd(int a,int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c,t;
cin>>t;
loop1(i,t){
	cin>>a>>b>>c;
	a=gcd(a,b);
	if(c%a==0)
	cout<<"Case "<<i<<": Yes\n";
	else
	cout<<"Case "<<i<<": No\n";
}
return 0;
}


