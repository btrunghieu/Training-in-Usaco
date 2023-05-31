#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll, ll>
#define fi first
#define se second

pi buckets[4];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    for (int i = 1; i <= 3; i++){
        cin >> buckets[i].fi >> buckets[i].se;
    }
    int index_1 = 1, index_2 = 2;
    for (int i = 1; i <= 100; i++){
        if (index_1 > 3){
            index_1 = 1;
        }
        if (index_2 > 3){
            index_2 = 1;
        }
        if (buckets[index_1].se + buckets[index_2].se > buckets[index_2].fi){
            buckets[index_1].se = buckets[index_1].se + buckets[index_2].se - buckets[index_2].fi;
            buckets[index_2].se = buckets[index_2].fi;
        } else {
            buckets[index_2].se = buckets[index_1].se + buckets[index_2].se;
            buckets[index_1].se = 0;
        }
        index_1++;
        index_2++;
        
    };
    for (int i = 1; i <= 3; i++) {
            cout << buckets[i].se << "\n";
    }
    return 0;
}