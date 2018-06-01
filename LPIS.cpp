#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 1000000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
int a[size];
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int i,max;
max=-1;
while(n--){
	cin>>i;
	if(!a[i-1])a[i]=1;
	else a[i]=a[i-1]+1;
	if(a[i]>max)
	max=a[i];
}
cout<<max<<endl;
return 0;
}


