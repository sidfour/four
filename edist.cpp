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

void edit(string a,string b){
	int n,m;
	n=a.length();
	m=b.length();
	int dp[n+1][m+1];
	loop(i,n+1)
	loop(j,m+1){
		
		if(i==0)
		dp[i][j]=j;// j instertins needed
		else if(j==0){
			dp[i][j]=i;
		}
		else if(a[i-1]==b[j-1])
		dp[i][j]=dp[i-1][j-1];
		
		else 
		dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
	}
	cout<<dp[n][m]<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a,b;
int t;
cin>>t;
while(t--){
	cin>>a>>b;
	edit(a,b);
}

return 0;
}


