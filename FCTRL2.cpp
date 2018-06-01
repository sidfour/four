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

int t,n;
int len,rem,temp;
cin>>t;
while(t--){
	int a[200];
	cin>>n;
	len=1;
	a[0]=1;
	loop1(i,n){
		rem=0;
		loop(j,len){
			temp=a[j];
			a[j]=(a[j]*i+rem)%10;
			rem=((temp*i+rem)/10);
		}
		while(rem>0){
			a[len++]=rem%10;
			rem/=10;
		}
		
	}
	for(int i=len-1;i>=0;i--)
	cout<<a[i];
	cout<<endl;
}
return 0;
}


