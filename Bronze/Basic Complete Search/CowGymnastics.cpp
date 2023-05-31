#include <bits/stdc++.h>
using namespace std;

struct haichieu{
    bool a[25][25];
};

int main(){
    // freopen("gymnastics.in", "r", stdin);
	// freopen("gymnastics.out", "w", stdout);
    int k, n;
    cin >> k >> n;
    int a[100][100];
    haichieu res[25];
    bool ans [25][25];
    for (int i=1; i<=k; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(res,0,sizeof(res));
    for (int p=1; p<=k; p++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                if (i==j) continue;
                if (a[p][i]>a[p][j]){
                    res[p].a[i][j]= true;
                }
            }
        }
    }
    bool tam;
    bool kqb;
    int kq = 0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            kqb = true;
            if (i==j) continue;
            for (int p=1; p<=k; p++) {
                if (res[p].a[i][j] != true){
                    kqb = false;
                    break;
                }
            }
            if (kqb) {
                kq++;
                cout << i << " " << j << '\n';
            }
        }
    }
    
    cout << kq;
}