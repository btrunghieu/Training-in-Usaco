#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct rect{
    ll x1,y1,x2,y2;
};

ll giaonhau(rect a, rect b){
    ll dt =  ((min(a.x2,b.x2)-max(a.x1,b.x1))) * ((min(a.y2,b.y2)-max(a.y1,b.y1)));
    if (min(a.x2,b.x2)-max(a.x1,b.x1)<0 || min(a.y2,b.y2)-max(a.y1,b.y1) < 0) return 0;
    return 1ll * dt;
}


ll giaonhau3(rect a, rect b, rect c){
    rect tg;
    if (min(c.x2,b.x2)-max(c.x1,b.x1)<0 || min(c.y2,b.y2)-max(c.y1,b.y1) < 0) return 0;
    tg.x2 = min(b.x2,c.x2);
    tg.x1 = max(b.x1,c.x1);
    tg.y2 = min(b.y2,c.y2);
    tg.y1 = max(b.y1,c.y1);
    if (min(a.x2,tg.x2)-max(a.x1,tg.x1)<0 || min(a.y2,tg.y2)-max(a.y1,tg.y1) < 0) return 0;
    ll dt =  ((min(tg.x2,a.x2)-max(tg.x1,a.x1))) * ((min(tg.y2,a.y2)-max(tg.y1,a.y1)));
    return 1ll * dt; 
}

int main(){
    rect a,b,c;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;
    ll dt = (a.x2-a.x1) * (a.y2-a.y1);
    if (dt >  giaonhau(a,b) + giaonhau(a,c) - giaonhau3(a,b,c) ) cout << "YES"; else cout << "NO";
}