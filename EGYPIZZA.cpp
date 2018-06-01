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
int a,b,n;
cin>>n;
char ch;
int a12,a14,a34;
a12=0;
a14=0;
a34=0;
while(n--){
	cin>>a>>ch>>b;
	if(a==1&&b==2)
	a12++;
	else if(a==1)
	a14++;
	else
	a34++;
}
int ans=0;
ans=ceil((a12+.0)/2);
if(a12&1)
a14-=2;
ans+=a34;
a14-=a34;
if(a14>0){
	ans+=ceil((a14+.0)/4);
}
cout<<ans+1<<endl;
return 0;
}


