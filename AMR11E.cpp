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
int p[3000],res[1001];

int i,j,ans[1001];
loop(i,3000)
p[i]=0;

for(i=2;i<3000;i++)
   {
	if(p[i]==0){
		for(j=i*2;j<3000;j+=i)
		p[j]++;
	}
//	cout<<i<<" "<<p[i]<<endl;
}

for(i=30,j=0;i<3000&&j<1001;i++)
{
	if(p[i]>=3)
	 res[j++]=i;
}


int t,n;
cin>>t;
		while(t--){
			cin>>n;
			cout<<res[n-1]<<endl;
		}
return 0;
}


