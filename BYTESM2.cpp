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
int dp[110][110],a[110][110];
int h,w,t;
int res=0;
cin>>t;
	while(t--){
		res=0;
		cin>>h>>w;
		loop(i,h)
			loop(j,w){
				cin>>a[i][j];
			}
		loop(i,h+1)
		{dp[i][0]=0;
		dp[i][w+1]=0;
		}
		loop(i,w)
		dp[0][i]=0;
		
		loop1(i,h){
			loop1(j,w){
				dp[i][j]=max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]))+a[i-1][j-1];
				if(i==h){
					res=max(res,dp[i][j]);
				}
			}
		}
		cout<<res<<endl;
	}
return 0;
}


