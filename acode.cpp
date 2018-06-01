#include<bits/stdc++.h>
#define pb push_back 
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
while(1){
	char a[5001];
	cin>>a;
	if(a[0]=='0')
	return 0;
	ll res[5004];
	int len,i,j,x;
	len=strlen(a);
	res[0]=res[1]=1;
	for(i=2;i<=len;i++){
		x=(a[i-2]-'0')*10+a[i-1]-'0';
		if(a[i-1]=='0')
		res[i]=res[i-2];
		else if(a[i-2]=='0')
		res[i]=res[i-1];
		else if(x<=26)
		res[i]=res[i-1]+res[i-2];
		else 
		res[i]=res[i-1];
	}
	cout<<res[len]<<endl;
}




return 0;
}
