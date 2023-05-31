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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int result = 0;
    for (int i = 0; i <= s.size(); i++){
        for (int j = i + 1; j < s.size(); j++){
            for (int k = j + 1; k < s.size(); k++){
                for (int m = k + 1; m < s.size(); m++){
                    result += (s[i] == s[k] && s[j] == s[m]);
                }
            }
        }
    }
    cout << result;
    return 0;
}