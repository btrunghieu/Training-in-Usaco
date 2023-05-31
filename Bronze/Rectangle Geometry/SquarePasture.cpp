#include <bits/stdc++.h>
using namespace std;

struct rect{
    int x1,y1,x2,y2;
};

int main(){
    // freopen("square.in", "r", stdin);
	// freopen("square.out", "w", stdout);
    rect a,b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    rect c;
    c.x1 = min(a.x1,b.x1);
    c.y1 = min(a.y1, b.y1);
    c.x2 = max(a.x2,b.x2);
    c.y2 = max(a.y2, b.y2);
    int dai = max (c.x2-c.x1,c.y2-c.y1);
    cout << dai * dai;
}