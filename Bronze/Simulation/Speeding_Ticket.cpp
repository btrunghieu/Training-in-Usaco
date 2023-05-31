#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll, ll>
#define fi first
#define se second

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int limit[106], speed[106];
    int n, m;
    cin >> n >> m;
    int index = 0;
    for (int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        for (int j = index+1; j <= a+index; j++){
            limit[j] = b;
        }
        index += a;
    }
    index = 0;
    for (int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;
        for (int j = 1 + index; j <= a+index; j++){
            speed[j] = b;
        }
        index += a;
    }
    int result = 0;
    for (int i = 1; i <= 100; i++){
        if (limit[i] < speed[i]){
            result = max(result, speed[i] - limit[i]);
        }
    }
    cout << result;
    return 0;
}