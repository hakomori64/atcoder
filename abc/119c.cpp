#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cstdio>
#include<cmath>
#include<bitset>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
int MOD=1000000007;int inf=1000000007;
int n;
int a[3];
signed main(){
    cin>>n;
    rep(i,3)cin>>a[i];
    vector<int> l(n);
    rep(i,n)cin>>l[i];
    int max=0;
    max|=(1<<n*2);
    int min=inf;
    for(int bit=0;bit<max;bit++){
        vector<int> buf(3,0);
        int mp=0;
        for(int i=0;i<n*2;i+=2){
            int flag=0;
            if(bit&(1<<i))flag++;
            if(bit&(1<<(i+1)))flag+=2;
            if(flag==3){
 
            }
            else{
                buf[flag]+=l[i/2];
                mp+=10;
            }
            //cout<<flag<<endl;
        }
        bool flag=false;
        rep(i,3){
            if(buf[i]==0)flag=true;
        }
        if(flag)continue;
        rep(i,3){
            mp+=abs(buf[i]-a[i]);
        }
        mp-=30;
        if(mp<min)min=mp;
    }
    cout<<min<<endl;
    return 0;
}