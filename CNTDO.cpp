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
int t,n,a[1006],ans,temp;
cin>>t;
	while(t--){
		cin>>n;
		loop(i,n)
		cin>>a[i];
		sort(a,a+n);
		ans=0;
		loop(i,n){
			temp=2*a[i];
			if(temp!=0)
			if(binary_search(a,a+n,temp))
			ans++;
		}
		loop(i,n)
		if(a[i]==0)
		ans++;
		cout<<ans<<endl;
		
	}
return 0;
}


