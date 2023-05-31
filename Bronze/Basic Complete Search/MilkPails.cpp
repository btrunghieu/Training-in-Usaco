#include <bits/stdc++.h>
using namespace std;

int x, y, m;

int main(){
    freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
    cin >> x >> y >> m;
    int n= 1;
    int ans = 0;
    for (int i=0; i<=10001; i++){
        for (int j=0; j<=1001; j++){
            n= i*x + j*y;
            if (n>m) break;
            ans = max(ans,n);
        }
    }
    cout << ans;
}