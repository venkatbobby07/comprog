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
 ll maxi=0,sum=1;
 vector <ll> v(n);
 rep(i,0,n){cin>>v[i];}
 sort(all(v));
 ll i=0,j=0;

 while(i<n && j<n){
   if(v[j]-v[i]<=5){
     maxi=max(maxi,j-i+1);
     j++;
   }else{
     i++;
   }
 }

 cout<<maxi;
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
