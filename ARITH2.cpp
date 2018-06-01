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
cin>>t;
while(t--){
	 
	ll n1,n2;
	cin>>n1;
	char ch;
	cin>>ch;
	while(ch!='='){
		cin>>n2;
		switch(ch){
			case '+':
				n1=n1+n2;
				break;
			case '-':
				n1-=n2;
				break;
			case '*':
				n1*=n2;
				break;
			case '/':
				n1/=n2;
				break;
		}
		cin>>ch;
	}
	cout<<n1<<endl;
	
}
return 0;
}


