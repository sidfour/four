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
ll  gcd(ll a,ll b){ if(b==0)return a;  else return gcd(b,a%b);}

using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
float a,b;
int res;
while(1){
	cin>>a;
	if(a==0)
	break;
	
	res=1;
	b=1.00/2.00;
	int i=3;
	while(b<a){
		res++;
		b+=1.00/(float)i;
		i++;
	}
	cout<<res<<" card(s)"<<endl;
	
}
return 0;
}


