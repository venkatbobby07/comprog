#pragma GCC optimize("Ofast")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI 3.1415926535 
#define mode 1000000007
#define mp make_pair
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define fi first
#define se second
#define all(x) x.begin(), x.end()
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
ll N=1e5+10,mod=1e17;
 
 ll bobs(vector <ll> &v,ll i,ll n){
 
   vector <ll> b(n,0);
 
   b[i]=0;
 
   ll sum=0;
 
   rep(j,i+1,n){
   b[j]=0;
   if(b[j-1]>=b[j]){
   ll a=sum;
   sum+=(b[j-1])/v[j];
   sum++;
   b[j]=(sum-a)*v[j];
   }else{sum++;}
 
   }
 
   for(int j=i-1;j>=0;j--){
    b[j]=0;
    if(b[j]>=b[j+1]){
      ll a=sum;
      ll a1=abs((b[j+1])/v[j]);
      sum+=a1;
      sum++;
      b[j]=(a-sum)*v[j];
    }else{sum++;}
   }
  //cout<<sum<<" ";
  return sum;
 
 }
 
void bobby(){
ll n;
cin>>n;
vector <ll> v(n);
 
rep(i,0,n){cin>>v[i];}
 
ll mini=mod;
 
rep(i,0,n){
  //cout<<1<<" ";
  mini=min(mini,bobs(v,i,n));
}
 
cout<<mini<<"\n";
 
}
  
  signed main(){
  
   venkat_bobby
   ll t=1;
   //cin>>t;
   while(t--){
     bobby();
   }
 
return 0;
}
