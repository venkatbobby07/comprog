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
 
  ll n,i,k; cin>>n>>k;
    vector <ll> a(n),m(k,0); 
    ll r=0;
    rep(i,0,n)
    {
        cin>>a[i];
        r+=a[i]/k;
        a[i]%=k;
        m[a[i]]++;
    }
    ll ex=0;
    rep(i,1,(k-1)/2+1)
    {
        ex+=m[k-i];
        ll px= min( m[i], ex );
        r+=px; ex-=px;
        //cout<<r<<" "<<ex<<" |";
    }
    if(k%2==0)
    {
        r+=( ex+m[k/2])/2;
    }
    else r+= ( ex)/2;
    cout<<r<<"\n";
 
  
}
 
 
signed main(){
 
  ll t=1;
  cin>>t;
  while(t--){
    bobby();
  }
  
  return 0;
}
