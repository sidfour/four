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
long double n,m,t,k;
int p;
cin>>p;
while(p--){
	cin>>n>>k>>m;
	t=0;
	if(n>=m){
	}
	else
	{
	while(n*k<=m){
		t++;
		n=n*k;
		
	}
	}
	cout<<t<<endl;
}
return 0;
}


