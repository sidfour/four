#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define size 100000+1
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
# define PI           3.14159265358979323846
ll  gcd(ll a,ll b){ if(b==0)return a;  else return gcd(b,a%b);}

using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
 scanf("%d",&t);
 while(t--)
 {
  int n,k;
  scanf("%d%d",&n,&k);
  int count_n=0,count_z=0,count_p=0,i;
  long long sum=0,min=9999999,temp;
  int a[n+9];
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   temp=a[i]>0?a[i]:-1*a[i];
   if(temp<min)
    min=temp;
   if(a[i]<0)
    count_n++;
  }
  if(k<=count_n)
  {
   int j=0;
   for(i=0;i<n;i++)
    if(a[i]<0 && j<k)
    {
     a[i]=-a[i];
     j++;
    }
   for(i=0;i<n;i++)
    sum+=a[i];
   printf("%lld\n",sum);
  }
  else
  {
   for(i=0;i<count_n;i++)
    a[i]=-a[i];
   for(i=0;i<n;i++){
    sum+=a[i];
   }
   if((k-count_n)%2!=0)
    sum+=-(2*min);
   printf("%lld\n",sum);
  }
 }
 return 0;
}


