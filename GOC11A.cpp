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
string s,ans,temp;
int t,n,q;
char ch;
cin>>t;
while(t--){
	cin>>s;
	int len=s.length();
	ans="";
	
	loop(i,len){
		ch=s[i];
		if('0'<=ch&&ch<='9'){
			n=ch-'0';
		
			temp=ans;
			while(--n){
				ans+=temp;
			}
		}
		else
		ans+=ch;
		
	}
	cin>>q;
	len=ans.length();
	while(q--){
		cin>>n;
		if(n>len)
		cout<<-1<<endl;
		else
		cout<<ans[n-1]<<endl;
		
	}
}
return 0;
}


