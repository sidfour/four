#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
# define M_PI           3.14159265358979323846 
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
double l,ans;
	while(1){
		cin>>l;
		if(l==0)
		break;
		ans=l*l;
		ans/=2;
		ans/=M_PI;
		cout<<fixed<<setprecision(2)<<ans<<endl;
		
	}
return 0;
}


