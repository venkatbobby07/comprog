
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void bobs(){
  int mini=1e9;
  int n,m;cin>>n>>m;
  vector<int> v(n);
  for(int i=0;i<n;i++){cin>>v[i];}

  int i=0,j=0,sum=0;
  while(j<n){
  
  
  sum+=v[j];
  while(sum-v[i]>=m){sum-=v[i];i++;}
  //cout<<sum<<" ";
  if(sum>=m){
    mini=min(mini,j-i+1);
  }
  j++;
  
  }
  if(mini!=1e9){cout<<mini<<"\n";}
  else{cout<<-1<<"\n";}
  
  return;
}

signed main(){
   venkat_bobby
    int t=1;
    //cin>>t;
    while(t--){
        bobs();
    }
    return 0;
}
