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
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
map<int,int>m;
cin>>n;
int mp,id;
while(n--){
	cin>>id;
	m[id]=1;
	cin>>mp;
	loop(i,mp){
		cin>>id;
		if(m.find(id)==m.end())
		m[id]=2;
		
	}
}
	int ans=0;
	map<int,int> :: iterator itr;
	for(itr = m.begin();itr!=m.end();itr++){
		if(itr->second==2)
		ans++;
	}
	

cout<<ans<<endl;
return 0;
}


