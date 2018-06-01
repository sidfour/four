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
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;


ull n,i,ans;

	while(t--){
		cin>>n;
		if(n==1)
		cout<<0<<endl;
		else if(n==2)cout<<1<<endl;
		else{
			ans=2;
			i=2;
			while(i<n){
				i+=ans;
				if(i>=n)break;
				
				ans++;
			}
			cout<<ans<<endl;
		}
		
		}
		
return 0;
	}




