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
ll gcd(int a,int b){
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ull n,k,g;
	while(1)
	{
	 cin>>n>>k;
	 if(n==-1&&k==-1)
	 return 0;
	ll p,q,t;
	t=(k-1)/2;
	p=k*t;
	p=p-(t*(t+1));
	/*k=k-2;
	while(k>0){
		p+=k;
		k-=2;
	}*/
//	cout<<"p"<<p<<endl;
  if(n&1)
  q=((n-1)/2)*n;
    else
	q=(n/2)*(n-1);
//	cout<<" jshgd"<<q<<endl;
	
	if(p==0)
		cout<<0<<endl;
	else{
		 g=gcd(p,q);
		 p/=g;
		 q/=g;
		 if(p/q==1)
		 cout<<1<<endl;
		 else
		 cout<<p<<"/"<<q<<endl;
	 
	}
		
		
	}


return 0;
}


