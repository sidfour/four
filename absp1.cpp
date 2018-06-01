#include<bits/stdc++.h>
#define pb push_back 
#define ll long long
using namespace std;
int main(){
	ll inp[10001],pos,neg;
	int n,t,i,j;
	cin>>t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		for(i=0;i<t;i++)
		{
		cin>>n;
		pos=0;neg=0;
			for(j=0;j<n;j++)
			cin>>inp[j];
		
			for(j=0;j<n;j++){
				neg+=(n-j-1)*inp[j];
				pos+=j*inp[j];
			}
			cout<<pos-neg<<endl;
		}
	

}
