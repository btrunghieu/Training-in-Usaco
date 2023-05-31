#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll x[5006], y[5006];
 
ll sol(ll x1, ll x2, ll y1, ll y2){
    return (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
}
 
int main(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x[i];
    }
    for (int i=1; i<=n; i++){
        cin >> y[i];
    }
    ll ans= 0;
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            ans = max(ans, sol(x[i],x[j],y[i],y[j]));
        }
        
    }
    cout << ans;
}