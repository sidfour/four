#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 1000000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int pi[size];
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

for(int i=2;i<size;i++){
	if(!pi[i]){
		pi[i]=i-1;// becz i is prime 
		for(int j=i<<1;j<size;j+=i){
			if(!pi[j]) pi[j]=j;
			pi[j]-=pi[j]/i;
			
		}
		
	}
}
int t;
int n;
pi[1]=1;
cin>>t;
ll ans;
while(t--){
cin>>n;
		ans=0;
		loop1(j,n)
		ans+=pi[j];
		cout<<ans*ans<<endl;
}

return 0;
}


