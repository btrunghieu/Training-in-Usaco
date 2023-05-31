#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
    int n, k, maxa = 0;
    cin >> n >> k;
    int a[1006];
    for (int i=1; i<=n; i++){
        cin >> a[i];
        maxa = max (a[i],maxa);
    }
    int res = 1, ans = 0;
    for (int i=1; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            if (abs(a[i]-a[j])<=k){
                res ++;
            }
        }
        ans = max (ans, res);
        res = 1;
    }
    cout << ans;
}