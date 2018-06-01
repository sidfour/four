#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
# define PI           3.14159265358979323846
ll  gcd(ll a,ll b){ if(b==0)return a;  else return gcd(b,a%b);}

using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n;
ll ans;
cin>>t;
while(t--){
	cin>>n;
	ans=1;
	loop(i,n-1){
		ans*=2;
	}
	cout<<ans<<" ";
   ans=ans+(ans/2)*(n-1);
	cout<<ans<<endl;
}
return 0;
}


