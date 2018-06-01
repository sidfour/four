#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 1000000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int a[size];
bool valid[size];
int sz=0;
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int c;
memset(valid,true,sizeof valid);
	for(int i=2;i<=100;i++){
		c=i*i*i;
		for(int j=c;j<size;j+=c)
		 valid[j]=false;
	}
	loop1(i,size-1){
		if(valid[i])
		a[sz++]=i;
	}
	
	
	ll n;
	int t;
	cin>>t;
	loop1(k,t){
	cin>>n;
	int lo,hi,mi;
	lo=0;
	hi=sz-1;
	while(lo<hi){
		mi=(hi+lo)>>1;
		if(a[mi]<n)
		lo=mi+1;
		else
		hi=mi;
	}
	cout<<"Case "<<k<<": ";
	if(a[lo]!=n)cout<<"Not Cube Free\n";
	else cout<<lo+1<<endl;
}
return 0;
}


