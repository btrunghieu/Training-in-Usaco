#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll, ll>
#define fi first
#define se second

struct Data
{
    int a, b, c;
};

Data dataa[106];

int emulator(int index, int n){
    bool change[4] = {0};
    change[index] = true;
    int result = 0;
    for (int i = 1; i <= n; i++){
        swap(change[dataa[i].a], change[dataa[i].b]);
        if (change[dataa[i].c]){
            result++;
        }
    }
    return result;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int a, b, c;
    
    for (int i = 1; i <= n; i++){
        cin >> dataa[i].a >> dataa[i].b >> dataa[i].c;
    }
    int result = 0;
    for (int i = 1; i <= 3; i++){
        result = max(result, emulator(i, n));
    }
    cout << result;
    return 0;
}