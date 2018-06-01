#include<bits/stdc++.h>
#define pb push_back 
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c;
while(1){
	cin>>a>>b>>c;
	if(a==0&&b==0&&c==0)
	return 0; //limiting condition
	if(2*b==(a+c)&&b-a!=0)
	cout<<"AP "<<c+b-a<<endl;
	else 
	cout<<"GP "<<c*b/a<<endl;
	
}

return 0;
}
