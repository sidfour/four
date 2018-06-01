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
int t,n,ans,p;
int a[64];
cin>>t;
while(t--){
	cin>>n;
	if(n&1)cout<<n<<endl;
	else{
		ans=0;
		p=0;
		while(n>0){
			if(n&1)
			a[p++]=1;
			else
			a[p++]=0;
			n/=2;
		}
		n=1;
		for(int i=p-1;i>=0;i--){
			
			if(a[i]==1)
			ans+=n;
			
			n*=2;
		}
		cout<<ans<<endl;
	}
}
return 0;
}


