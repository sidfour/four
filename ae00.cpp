#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,res;
cin>>n;
res=0;
int i,j;
for(i=1;i<=n;i++){
	for(j=1;j*j<=i;j++)
	{
		if(i%j==0)
		res+=1;
	}
}
cout<<res;

return 0;
}

