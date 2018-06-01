#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
# define PI           3.14159265358979323846
ll  gcd(ll a,ll b){
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll a,p;
string s;
int t;
cin>>t;
	while(t--){
  	cin>>s;
  	int len=s.length();
  	p=1;
  	a=0;
  	bool f=false;
  	loop(i,len){
  		if(s[i]=='.'){f=true;
  		continue;
		  }
  		if(f){
  			a=a*10+s[i]-'0';
  			p*=10;
		  }
  		
	  }
	  
	  cout<<p/gcd(p,a)<<endl;
		
	}
return 0;
}


