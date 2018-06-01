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
double ans,n;
int t;
cin>>t;
while(t--){
	cin>>n;
	ans=0;
	loop1(i,n) ans+=1.00/(float)i;
	ans*=n;
	cout<<fixed<<setprecision(2)<<ans<<endl;
}
return 0;
}


