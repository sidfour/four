#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int  t;
cin>>t;
int a,b,ra,rb;
while(t--){
	cin>>a>>b;
	ra=0;
	rb=0;
	while(a>0){
		ra=ra*10+a%10;
		a/=10;
		
	}
	while(b>0){
		rb=rb*10+b%10;
		b/=10;
		
	}

	a=ra+rb;
	ra=0;

	while(a>0){
		ra=ra*10+a%10;
		a/=10;
		
	}
	cout<<ra<<endl;
}
return 0;
}

