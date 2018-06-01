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
while(1){
	cin>>n;
	if(n==0)
	return 0;
	
	cout<<(5*n*(n+1)/2-n*n+1)<<endl;
}
return 0;
}


