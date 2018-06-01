#include<bits/stdc++.h>
#define pb push_back 
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
int e,n;
for(int i=0;i<t;i++){
	cin>>e>>n;
	int min;
	min=e>n?n:e;
	//cout<<min;
	
	if(min>(e+n)/3)
	cout<<(e+n)/3;
	else
	cout<<min;
	cout<<endl;
	
	
	
}
}
