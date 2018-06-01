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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
int i,j,k;
int n;
int a[size],max;
int mno,cnt;
mno=0;
int rn=0;
	while(t--){
		mno=0;
		rn=0;
		cin>>n>>max;
			loop(i,n)
			cin>>a[i];
			i=0;j=0;
			int count=0;
			loop(i,n){
				if(count+a[i]<=max){
				
				count+=a[i];
				rn++;
			}
				else {
						while(count+a[i]>max)
						{
						count-=a[j];
						rn--;
						j++;
						}
						count+=a[i];
						rn++;
				}
				if(rn>mno||(rn==mno&&count<cnt))
				{mno=rn;
				cnt=count;
				//cout<<mno<<" "<<cnt<<" "<<i<<j<<endl;
				}
				
			}
			cout<<cnt<<" "<<mno<<endl;
		
		
	}
return 0;
}

