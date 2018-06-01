#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,i,j;
t=1;
	while(t--){
	char s[6200],r[6200];
	cin>>i;
	cin>>s;
	int len=strlen(s);
		int dp[len+4][len+4];

		for(i=0;i<len+2;i++)
		{dp[0][i]=0;
		dp[i][0]=0;
		}
		for(i=0;i<len;i++)
		r[len-1-i]=s[i];//to reverse 
		
		for(i=1;i<=len;i++){
			for(j=1;j<=len;j++){
				if(s[i-1]==r[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
				else
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
		cout<<len-dp[len][len]<<endl;
	}

return 0;
}

