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
int t,h,a;
cin>>t;
int ans;

	while(t--){
		cin>>h>>a;
	   ans=1;
	   h+=3;
	   a+=2;
	   while(h>0&&a>0){
	   	
	   	if(h>5&&a>10){
	   		ans+=2;
	   		h-=2;
	   		a-=8;
		   }
	   	else if(h>20){
	   		ans+=2;
	   		h-=17;
	   		a+=7;
		   }
		   else break;
	   }
	   cout<<ans<<endl;
	}
return 0;
}


