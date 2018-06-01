#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define SIZE 200000 + 2
int p[SIZE * 2];

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,i;
string s;
string temp;
s="@";
cin>>n>>temp;

for(i=0;i<n;i++)//conversion to new string 
s+="#"+temp.substr(i,1);
s+="#$";

int len=s.length();
int c=0,r=0;

	for(i=1;i<len-1;i++){
		int ip=c-(i-c);
		
		if(r>i)
		p[i]=min(r-i,p[ip]);
		
		while(s[i+1+p[i]]==s[i-1-p[i]])
		p[i]++;
		
		if(i+p[i]>r)
		{
			r=i+p[i];
			c=i;
			
		}
	}
    int max=0;
	for(i=1;i<len-1;i++){
	if(p[i]>max)
	max=p[i];
	}
	cout<<max<<endl;





return 0;
}

