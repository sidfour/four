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
int g,b,ans;
while(1){
	cin>>b>>g;
	if(b==-1&&g==-1)
	break;
	
	if(b==0&g==0)
	cout<<0<<endl;
	else if(g==b)
	cout<<1<<endl;
	else {
		if(g>b)
		swap(g,b);// b is greater now
		
		if(b%(g+1)!=0)
		ans=b/(g+1)+1;
		else
		ans=b/(g+1);
		cout<<ans<<endl;
		
	}
}
return 0;
}


