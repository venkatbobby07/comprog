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
const ll N=1e5+10,mod=1e9;
 
 
void bobby(){

  ll n,c,sum=0,run=0;cin>>n>>c;
  ll a[n],b[n];
  rep(i,0,n-1){
    cin>>a[i];
  }
  rep(i,0,n-1){
    cin>>b[i];
  }
 ll el=0,st=0;
  for(int i=0;i<n;i++){
    cout<<min(el+c,st)<<" ";
    st=min(st,min(st,el+c));
    el=min(el,min(st,el+c));
    st+=a[i];
    el+=b[i];
  }
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
