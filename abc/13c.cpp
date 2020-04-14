#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n,h;
  cin >> n >> h;

  ll a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;

  ll need = e*n-h;
  ll ans = LLONG_MAX;
  rep(i,n+1){
    ll res = i*c;
    ll pos = n-i;
    if(need - i*(d+e)>=0){
      ll nnom = (need - i*(d+e))/(b+e)+1;
      //      if((need - i*(d+e))%(b+e)!=0) nnom++;
      if(nnom>pos) continue;
      res += nnom*a;      
    }
    ans = min(res,ans);
    //    cout << res << endl;
  }
  cout << ans << endl;
  
  return 0;
    

}
