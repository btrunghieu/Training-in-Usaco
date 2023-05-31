#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<ll, ll>
#define fi first
#define se second

int main(){

    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int amount [26] = { };
    int N;
    cin >> N;
    string a, b;
    for (int i = 0; i < N; i++) {
        int amounta [26] = { };
        int amountb [26] = { };
        cin >> a >> b;
        for (int j = 0; j < a.length(); j++) {
            amounta[a.at(j) - 97]++;
        }
        for (int j = 0; j < b.length(); j++) {
            amountb[b.at(j) - 97]++;
        }
        for (int j = 0; j < 26; j++) {
            amount[j] += max(amounta[j], amountb[j]);
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << amount[i] << endl;
    }
}