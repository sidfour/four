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
int n,m,d,a[1000],t;
cin>>t;
while(t--){
	cin>>n>>m>>d;
	
	loop(i,n)cin>>a[i];
	
	int count=0;
	loop(i,n){
		count+=ceil((a[i]+.0)/d)-1;
		if(count>=m)
		break;
	}
	if(count>=m)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
return 0;
}


