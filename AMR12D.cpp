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
string s,r;
ll t,i,j;
cin>>t;
while(t--){
	cin>>s;
	r=s;
	reverse(r.begin(),r.end());
	int l=s.length();
	int dp[l+4][l+4];
	
	loop(i,l+2)
	{
		dp[0][i]=0;
		dp[i][0]=0;
	}
	for(i=1;i<=l;i++){
		for(j=1;j<=l;j++){
			if(s[i-1]==r[j-1])
			dp[i][j]=dp[i-1][j-1]+1;
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	if(dp[l][l]==l)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
return 0;
}


