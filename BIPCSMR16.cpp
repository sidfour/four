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
int t;
cin>>t;
while(t--){
	ll a[3];
	loop(i,3)
	cin>>a[i];
	sort(a,a+3);
	ll sum=0;
	loop(i,3)
	sum+=a[i];
	
	sum/=3;
	
	ll m=0;
	loop(i,2)
	m+=a[i];
	
	if(m<sum)
	cout<<m<<endl;
	else
	cout<<sum<<endl;
}
return 0;
}


