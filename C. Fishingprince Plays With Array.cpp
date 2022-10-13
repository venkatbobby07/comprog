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
const ll N=3e5+10,mod=1e9;

void bobby(){
  ll n,x;
  cin>>n>>x;
  vector <ll> v(n),ans(n);
  rep(i,0,n){
    cin>>v[i];
  }
  ll n1;cin>>n1;
  vector <ll> v1(n1),ans1(n1);
  rep(i,0,n1){cin>>v1[i];}
  ll sum1=0,sum2=0;

  rep(i,0,n){
    int k=v[i];
    while(k%x==0){
      k=k/x;
    }
    ans[i]=k;
  }

  rep(i,0,n1){
    int k=v1[i];
    while((k%x)==0){
      k=k/x;
    }
    ans1[i]=k;
  }

  vector <ll> p,p1;
  
  int b=ans[0],run=0,run1=0,b1=ans1[0];
  if(b!=b1){
    cout<<"NO"<<"\n";
    return;
  }
  p.push_back(v[0]);
  p1.push_back(v1[0]);

 

  rep(i,1,n){
    if(ans[i]==b){
      p[run]+=v[i];
    }else{
      b=ans[i];
      run++;
      p.push_back(v[i]);
    }
  }

  rep(i,1,n1){
    if(ans1[i]==b1){
      p1[run1]+=v1[i];
    }else{
      b1=ans1[i];
      run1++;
      p1.push_back(v1[i]);
    }
  }
  if(p==p1){
    cout<<"YES"<<"\n";
    return;
  }
  cout<<"NO"<<"\n";
}


signed main(){

  ll t=1;
  cin>>t;
  while(t--){
    bobby();
  }
  
  return 0;
}
