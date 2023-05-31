#include <bits/stdc++.h>
using namespace std;

struct rect{
    int x1,y1,x2,y2;
};

int giaonhau(rect a, rect b){
    return  (min(a.x2,b.x2)-max(a.x1,b.x1)) * (min(a.y2,b.y2)-max(a.y1,b.y1));
}

int main(){
    // freopen("billboard.in", "r", stdin);
	// freopen("billboard.out", "w", stdout);
    rect a,b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    if ((b.y1<=a.y1 && b.y2 >= a.y2 && b.x1 >=a.x1 && b.x2 >= a.x2) 
    || (b.y1<=a.y1 && b.y2 >= a.y2 && b.x1 <=a.x1 && b.x2 <= a.x2) ||
    (b.x1<=a.x1 && b.x2 >= a.x2 &&  b.y1 <= a.y1 && b.y2<=a.y2)
    ||(b.x1<=a.x1 && b.x2 >= a.x2 &&  b.y1 >= a.y1 && b.y2>=a.y2)){
        cout << abs((a.y2-a.y1)*(a.x2-a.x1)) - giaonhau(a,b);
    } else {
        cout << abs((a.y2-a.y1)*(a.x2-a.x1));
    }
}