#include <bits/stdc++.h>
using namespace std;
signed main(){
    long long n;cin>>n;
    vector <long long> v(n),ans(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    sort(v.begin(),v.end());
    int i=0,k=1;
    while(k<n){ans[k]=v[i];i++;k+=2;}
    k=0;
    while(k<n){ans[k]=v[i];i++;k+=2;}
    // cout<<(n%2==0?(n/2-1):n/2)<<"\n";
    // for(int i=0;i<n;i++){cout<<ans[i]<<" ";}
    int cnt=0;
    for(int i=1;i<n;i+=2){if(ans[i]<ans[i-1] && i+1<n && ans[i]<ans[i+1]){cnt++;}}
    cout<<cnt<<"\n";
    for(int i=0;i<n;i++){cout<<ans[i]<<" ";}
    return 0;
}
