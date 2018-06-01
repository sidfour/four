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
ll a,b,n,t,count;
cin>>t;
	while(t--){
		cin>>n;
		a=1;
		b=1;
		count=1;
		bool f=1;// f= 1 increment b else a
		while(count<n){
			if(f==0){
				a++;
				count++;
				if(count==n)
				break;
				while(a>1)
				{a--;
				b++;
				count++;
				if(count==n)
				break;
				
				}
				f=1;
				
			}
			else{
				b++;
				count++;
				if(count==n)
				break;
				while(b>1){
					a++;
					b--;
					count++;
					if(count==n)
				    break;
				}
				f=0;
				
			}
			
		}
		cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
	}
return 0;
}


