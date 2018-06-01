#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 20000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,n,k;
int h[size];
cin>>t;
while(t--){
	cin>>n>>k;
	loop(i,n)
	cin>>h[i];
	sort(h,h+n);
	int min=INT_MAX;
	int j=0;
	loop(i,n-k+1){
		if(min>h[i+k-1]-h[i])
		min=h[i+k-1]-h[i];
		
	}
	cout<<min<<endl;
}
return 0;
}


