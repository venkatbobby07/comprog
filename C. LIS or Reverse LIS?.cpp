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
ll n;cin>>n;
vector <ll> v(n),v1(n);
map <ll,ll> m;
ll x=n;
rep(i,0,n){
  cin>>v[i];
  m[v[i]]++;
  if(m[v[i]]>2){x--;}
  }
cout<<(x+1)/2<<"\n";

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
