#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int c,n;
int canplace(int x[],int mid){
	int i,p,count;
	count=1;
	i=1;
	p=0;
//	cout<<n<<endl;
	while(i<n){
//	cout<<i;
		if((x[i]-x[p])>=mid)
		{p=i;
		count++;
		 	if(count==c)
		 		return 1;
		}
		i++;
	}
	return 0;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
int x[100001];
int i,j,ini,last,max,mid;
cin>>t;
		while(t--){
					cin>>n>>c;
					for(i=0;i<n;i++)
					cin>>x[i];
					sort(x,x+n);
					ini=0;last=x[n-1];
					max=-1;
					while(last>ini){
						mid=ini+last;
						mid/=2;
						if(canplace(x,mid)==1){
							if(mid>max)
							max=mid;
							ini=mid+1;
						}
						else
						last=mid;

					}
					cout<<max<<endl;
					
		}
	

return 0;
}

