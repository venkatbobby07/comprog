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
const ll N=1e5+10,mod=1e12+10;
 
 
void bobby(){
  ll n;cin>>n;
  ll a[n+1];
  map <ll,ll> m;
  rep(i,1,n+1){cin>>a[i];m[a[i]]=i;}

  vector <ll> v(n+1);

  for(int i=n;i>=1;i--){
      ll run=0,pos;
      for(int j=1;j<=i;j++){
      if(m[i]==j){pos=j;break;}
      }

      if(i!=m[i]){
      run=pos;
      for(int j=1;j<=i;j++){
      if(m[j]-pos<1){m[j]+=i-pos;}
      else{m[j]-=pos;}
      }}
      //cout<<m[i]<<" "<<run<<"\n";
      v[i]=run;
    }
    rep(i,1,n+1){cout<<v[i]<<" ";}
    cout<<"\n";
}
  
  signed main(){
  
   venkat_bobby
   ll t=1;
   cin>>t;
   while(t--){
     bobby();
   }
 
return 0;
}
