#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
 
#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define infi INT_MAX
#define infl LLONG_MAX
#define mod 1000000007
#define pi 3.14159265358979323846
#define ll long long
#define pb push_back
#define all(x) x.begin(),x.end()
 
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    pair<int,int> p={-1,-1};
    bool f[n]={0};
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<m;j++){
            v.pb(a[i][j]);
        }
        sort(all(v));
        int c=0,i1=-1,i2=-1;
        for(int j=0;j<m;j++){
            if(a[i][j]!=v[j]){
                c++;
                if(i1==-1){
                    i1=j;
                }
                else{
                    i2=j;
                    if(p.ff==-1){
                        p = {i1,i2};
                    }
                    else{
                        if(i1!=p.ff || i2!=p.ss){
                            cout<<"-1\n";
                            return;
                        }
                    }
                }
            }
        }
        if(c>2){
            cout<<"-1\n";
            return;
        }
        else if(c==0){
            f[i]=1;
        }
    }
    if(p.ff==-1){
        cout<<"1 1"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(f[i]==1){
                if(a[i][p.ff]!=a[i][p.ss]){
                    cout<<"-1\n";
                    return;
                }
            }
        }
        cout<<p.ff+1<<" "<<p.ss+1<<endl;
    }
}       
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
