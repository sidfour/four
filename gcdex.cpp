#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 1000000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
# define PI           3.14159265358979323846
ll  gcd(ll a,ll b){ if(b==0)return a;  else return gcd(b,a%b);}
int pi[size];
ll g[size];
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
pi[1]=1;
g[1]=0;
int i,j;
	for(i=2;i<size;i++){
		if(!pi[i]){
			pi[i]=i-1;
			for(j=i<<1;j<size;j+=i){
				if(!pi[j]) pi[j]=j;
				pi[j]-=pi[j]/i;
			}
		}
	}
	
	for(i=1;i<size;i++){
		for(j=2;j*i<size;j++){
			g[i*j]+=i*pi[j];
		}
	}
	
	for(i=2;i<size;i++){
		g[i]+=g[i-1];
	}
	
	int n;
	while(1){
		cin>>n;if(n==0)break;
		cout<<g[n]<<endl;
	}


return 0;
}


