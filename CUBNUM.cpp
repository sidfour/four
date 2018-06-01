#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int c[47];
void cube(){
	loop1(i,46)
	c[i-1]=i*i*i;
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cube();
int ans[size];
ans[0]=0;

loop1(i,size-1){
	ans[i]=size;
	for(int j=45;j>=0;j--){
		if(c[j]>i)continue;
		else
		ans[i]=min(ans[i],1+ans[i-c[j]]);
	}
}

int n;
int t=0;

while(scanf("%d",&n)!=EOF){
t++;
//printf("Case #%d: %d\n", cas++, ans[n]);
	cout<<"Case #"<<t<<": "<<ans[n]<<endl;
}



return 0;
}



