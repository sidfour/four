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
int n;
int c[10001];
ll ans,temp,res;
	while(1){
		ans=0;
		res=0;
		cin>>n;
		if(n==-1)
		return 0;
		loop(i,n)cin>>c[i];
		
		loop(i,n)ans+=c[i];
		temp=ans/n;
		if(temp*n==ans){
			loop(i,n)
			res+=abs(temp-c[i]);
			res/=2;
		  cout<<res<<endl;
		}
		else
		cout<<-1<<endl;
		
	}
return 0;
}


