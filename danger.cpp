#include<bits/stdc++.h>
#include<math.h>
typedef long long int ll;
using namespace std;
int main(){
	ll a,b,n;
	char ch;
	cin>>a>>ch>>b;
	while(a!=0){
	for(int i=0;i<b;i++)
	a*=10;
	for(a=1;a<100;a++){
	
	n=log2(a);
	n=pow(2,n);
	cout<<(a-n)*2+1<<endl;	
	}
		
		
		
		
		cin>>a>>ch>>b;
	}
}
