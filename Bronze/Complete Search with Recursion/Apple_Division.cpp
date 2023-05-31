#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll weight[20];

ll solve(int i, ll sum1, ll sum2) {
	if (i == n) { return abs(sum1 - sum2); }
	return min(solve(i + 1, sum1 + weight[i], sum2),
	           solve(i + 1, sum1, sum2 + weight[i]));
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> weight[i]; }
	cout << solve(0, 0, 0) << endl;
}