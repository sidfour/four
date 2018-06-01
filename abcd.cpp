#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char ch[2*n+1],res[2*n+1];
	cin>>ch;
	
	for(int i=0;i<2*n;i+=2){
		int f[4]={1,1,1,1};
		
		f[ch[i]-'A']=0;
		f[ch[i+1]-'A']=0;
		
		int a=-1,b=-1;
		for(int j=0;j<4;j++){
			if(f[j]==1){
				if(a==-1)
				a=j;
				else
				b=j;
			}
		}
		res[i]=a+65;
		res[i+1]=b+65;
		if(i>0)
		if(res[i]==res[i-1])
		swap(res[i],res[i+1]);
		
		
	}
	
	
	for(int i=0;i<2*n;i+=1){
		cout<<res[i];
		
	}
	cout<<endl;
	
}
