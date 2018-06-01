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
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
int  x[4];
int xp[4];
int num[4];
while(1){
	loop(i,4)
	cin>>x[i];
	loop(i,4)
	cin>>xp[i];
	int f=0;
	loop(i,4)
	if(x[i]!=-1)
	f=1;
	loop(i,4)
	if(xp[i]!=-1)
	f=1;
	if(f==0)
	return 0;
	loop(i,4){
		num[i]=(ceil((x[i]+.0)/(xp[i]+.0)));
		//cout<<num[i]<<" ";
	}
   int max=0;
   loop(i,4){
   	if(max<num[i])
   	max=num[i];
   }
	
	loop(i,4){
		x[i]=max*xp[i]-x[i];
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	
}

return 0;
}


