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
string a,b;
int l1,l2;


while(cin>>a){
	cin>>b;
	int x[26];
	int y[26];
	loop(i,26)
	x[i]=y[i]=0;
	l1=a.length();
	l2=b.length();
	
	loop(i,l1)
	x[a[i]-'a']++;
	loop(i,l2)
	y[b[i]-'a']++;
	
	loop(i,26){
		int k=min(x[i],y[i]);
		char ch=i+'a';
		loop(j,k){
			cout<<ch;
		}
		
	}
	cout<<endl;
	
}

return 0;
}


