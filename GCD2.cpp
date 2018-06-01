#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
# define PI           3.14159265358979323846
ll  gcd(ll a,ll b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string b;
int a,t,rem,i,n;
cin>>t;
	while(t--){
		cin>>a>>b;
		n=b.length();
		rem=0;
		i=0;
		if(a==1)cout<<1<<endl;
		else if(a==0){
		
		loop(i,n)cout<<b[i];
		
		cout<<endl;}
		else{
				while(i<n){
			rem=rem*10+b[i]-'0';
			rem=rem%a;
			i++;
		}
		cout<<gcd(a,rem)<<endl;	
		}
	
		
	}

return 0;
}


