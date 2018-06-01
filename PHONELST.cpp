#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
# define PI           3.14159265358979323846
ll  gcd(ll a,ll b){ if(b==0)return a;  else return gcd(b,a%b);}

using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t,n;
cin>>t;
string x;int len;
	while(t--){
	vector<string> vec;
	cin>>n;
	loop(i,n){
		cin>>x;
		vec.pb(x);
	}
	string prev="hgd";
	sort(vec.begin(),vec.end());
	bool flag=0;
	for(int i=0;i<vec.size()&&flag==0;i++){
		
		len=prev.length();
          string cpy= vec.at(i).substr(0,len);
		if(cpy==prev){
			flag=1;
			cout<<"NO\n";
			break;
		}
		prev=vec.at(i);
	
	}


if(flag==0)
cout<<"YES\n";
	}
return 0;
}


