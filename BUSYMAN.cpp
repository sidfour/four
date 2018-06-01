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
int t,n;
cin>>t;
	while(t--){
		cin>>n;
		pair<int,int>s[size];
		int a,b;
		loop(i,n){
			cin>>a>>b;
			s[i]=(mp(b,a));
		}
		sort(s,s+n);
		int ans=0;
		int e=-1;
		loop(i,n){
			if(s[i].second>=e)
			{
				ans++;
				e=s[i].first;
			}
		}
		cout<<ans<<endl;
	}

return 0;
}


