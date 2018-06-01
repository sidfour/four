#include<bits/stdc++.h>
#define pb push_back 

using namespace std;
int main(){
	int x[101];
	vector<int>s1,s2;
	int n;
	cin>>n;
	int i,j,k;
	for(i=0;i<n;i++)
	cin>>x[i];
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)
	 s1.pb(x[i]*x[j]+x[k]);
    
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++){
	
	if(x[i]==0)continue;
	
	 s2.pb(x[i]*(x[j]+x[k]));}
	
	sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		
		int low,high;
		long long res=0;
		for (i=0;i<s1.size();i++)
		{
			low=lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
			high=upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
			res+=high-low;
		}
cout<<res<<"\n";
	
	
}
