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
int a,b,t,n;
t=10;
int sum=0;
	while(t--){
		cin>>n;
		sum+=n;
		if(sum>=100){
			a=sum-100;
			b=100-sum+n;
			
			cout<<(a==b?sum:(a<b?sum:sum-n))<<endl;
			return 0;
		}
	}
		if(t==-1) cout<<sum<<endl;
		
return 0;
}


