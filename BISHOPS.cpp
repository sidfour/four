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
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);cout.tie(NULL);
string str;
int a[204];
while(cin>>str)
	{
//	cout<<str<<endl;
	 int len=str.length();
	 
	 
	 if(len==1){
	 	int x=str[0]-'0';
	 	if (x==0)
	 	cout<<0;
	 	else if(x==1)
	 	cout<<1;
	 	else
	 	cout<<2*x-2;
	 	cout<<endl;
	 }
	 else{
	 
		int ans[204];
		loop(i,len) //convertion to int  
		a[i]=str[len-1-i]-'0';
		
		int i=0;
		int rem=0;
		loop(i,len)// multiplyig with 2
		{ans[i]=(a[i]*2+rem)%10;
		rem=(a[i]*2+rem)/10;
		}
		while(rem>0){
			
			ans[len]=rem%10;
			rem/=10;
			len++;
			
		}

	  ans[i]-=2;
	  while(i<len){
		  if(ans[i]<0){
			  ans[i]+=10;
			  ans[i+1]-=1;
		  }
		  else
			  break;
			  i++;
		  
	  }
	  while(ans[len-1]==0)
		  len--;
	  loop(i,len)
	  cout<<ans[len-1-i];
	  cout<<endl;
	}
	}

}






