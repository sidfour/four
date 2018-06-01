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
int r[8],c[8];
string s;
int t ,i,j;
cin>>t;

while(t--){
	loop(i,8){
		r[i]=0;
		c[i]=0;
	}
	loop(i,8){
		cin>>s;
		loop(j,8){
			if(s[j]=='R'){
				r[i]++;
				c[j]++;
			}
		}
	}
	
	bool flag=true;
	loop(i,8){
		if(r[i]>1||c[i]>1||r[i]==0||c[i]==0){
			flag=false;
			break;
		}
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
}

return 0;
}


