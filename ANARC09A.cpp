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
int o,c,ans,t=0;
while(1){
	t++;
	o=ans=0;
	string s;
	cin>>s;
	if(s[0]=='-')
	return 0;
	int l=s.length();
//	cout<<l<<endl;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='{')
		o++;
		else if(s[i]=='}'){
			if(o==0)
			{ans++;
			o++;
			}
			else
			o--;
		}
		
	}
	ans+=o/2;
	
	cout<<t<<". "<<ans<<endl;
	
}
return 0;
}


