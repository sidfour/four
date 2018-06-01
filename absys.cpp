#include<bits/stdc++.h>
#define pb push_back 
#define ll long long
using namespace std;
int main(){
int n1,n2,res;
int t,i,j;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>t;
for(j=0;j<t;j++){
	int p,m,e;
	char ch[100];
	scanf("\n%[^\n]s",ch);
	int len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]=='m')
		m=i;
		else if(ch[i]=='+')
		p=i;
		else if(ch[i]=='=')
		e=i;
	}
//	cout<<p<<" "<<e<<" "<<endl;
	n1=n2=res=0;
	
			if(m<p){
				for(i=p+2;i<e-1;i++)
				n2=n2*10+ch[i]-'0';
				for(i=e+2;i<len;i++)
				res=res*10+ch[i]-'0';
				n1=res-n2;
			}
			else if (m>p&&m<e){
				for(i=0;i<p-1;i++)
				n1=n1*10+ch[i]-'0';
				for(i=e+2;i<len;i++)
				res=res*10+ch[i]-'0';
				n2=res-n1;
			}
			else{
			    for(i=0;i<p-1;i++){
			
				n1=n1*10+ch[i]-'0';}
				for(i=p+2;i<e-1;i++)
				n2=n2*10+ch[i]-'0';
				res=n1+n2;
				
			}
			cout<<n1<<" + "<<n2<<" = "<<res<<endl;
			
}

}
