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

unsigned long long a3,ar3,sum;
int t;
cin>>t;
while(t--){
	cin>>a3>>ar3>>sum;
	unsigned long long n,d,a;
	n=sum*2/(a3+ar3);
	d=ar3-a3;
	d/=(n-5);
	a=a3-2*d;
	cout<<n<<endl;
	loop(i,n)
	{cout<<a+i*d<<" ";
	}
	cout<<endl;
}
return 0;
}


