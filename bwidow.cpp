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
int t;
int r,R,rm,ind;
cin>>t;
	while(t--){
		int n;
		cin>>n;
		rm=0;
		pair<int,int>p[n+1];
		loop(i,n)
		{cin>>r>>R;
		if(r>rm)
		{rm=r;
		ind=i+1;
		}
		p[i]=mp(r,R);
		}
		
		
		bool f=true;
		loop(i,n){
			if(p[i].second>rm&&i!=ind-1)
			{f=false;
			break;
			}
		}
		if(f)cout<<ind<<endl;
		else
		cout<<-1<<endl;
		
	}

return 0;
}


