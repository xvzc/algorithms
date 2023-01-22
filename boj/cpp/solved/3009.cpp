#include <bits/stdc++.h>
#include <unordered_map>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int xa, xb, xc, ya, yb, yc;
int rx, ry;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    if(xa == xb)
        rx = xc;
    if(xa == xc)
        rx = xb;
    if(xb == xc)
        rx = xa;

    if(ya == yb)
        ry = yc;
    if(ya == yc)
        ry = yb;
    if(yb == yc)
        ry = ya;

    cout << rx << ' ' << ry << endl;

    return 0;
}