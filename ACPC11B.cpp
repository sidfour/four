#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int i,res,j,n,m,t,m1[1001],m2[1001];
cin>>t;
while(t--){
	cin>>n;
	for(i=0;i<n;i++)
	cin>>m1[i];
	
	cin>>m;
	for(i=0;i<m;i++)
	cin>>m2[i];
	
	sort(m1,m1+n);
	sort(m2,m2+m);
	
	i=0;j=0;
	res=INT_MAX;
	while(i<n&&j<m){
		if(abs(m1[i]-m2[j])<res)
		res=abs(m1[i]-m2[j]);
		if(m1[i]<m2[j])
		i++;
		else
		j++;
		
	}
	cout<<res<<endl;
	


}


return 0;
}

