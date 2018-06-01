#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;

while(1){
	cin>>n;
	if(n==0)
	return 0;
	int a[n];
	loop(i,n)
	cin>>a[i];
	cin>>m;
	int b[m];
	loop(i,m)
	cin>>b[i];
	int res=0;
	ll asum=0,bsum=0;
int i=0,j=0;
while(i<n&&j<m){
	//	cout<<a[i]<<"--1---? "<<b[j]<<endl;

	 if (a[i]==b[j]){
		res+=max(asum,bsum)+a[i];
		//cout<<res<<endl;
		i++;
		j++;
		asum=0;
		bsum=0;
	}
	else if(a[i]<b[j]){
		asum+=a[i];
		i++;	
	}
//	cout<<a[i]<<"---2--? "<<b[j]<<endl;
	else if(a[i]>b[j]){
		bsum+=b[j];
		j++;
	}

}
while(i<n)
{
	asum+=a[i];
	i++;
}
while(j<m)
{
	bsum+=b[j];
	j++;
}
res+=max(asum,bsum);
cout<<res<<endl;
}
return 0;
}


