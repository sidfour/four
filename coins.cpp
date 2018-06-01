#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int a[size];
ll val(ll i){
	if(i<size-1)
	if(a[i]!=0){
		return a[i];
	}
	
	if(i<i/2+i/3+i/4){
		return (val(i/2)+val(i/3)+val(i/4));
	}
	else
	return i;
}

using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
a[0]=0;
a[1]=1;
a[2]=2;
loop1(i,size){// precomputation
	a[i]=0;
	a[i]=val(i);
}
while(cin>>n){
	cout<<val(n)<<endl;
}


return 0;
}


