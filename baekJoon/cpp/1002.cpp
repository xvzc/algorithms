#include <bits/stdc++.h>
#include <unordered_map>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

double T, xi, xj, yi, yj, ri, rj;

void solve(){
    double d = sqrt((xj-xi)*(xj-xi) + (yj-yi)*(yj-yi));
    if(d == 0 && ri == rj)
        cout << -1 << endl;
    else if(d == 0 && ri != rj)
        cout << 0 << endl;
    else if(d < max(ri, rj) && d + min(ri, rj) < max(ri, rj))
        cout << 0 << endl;
    else if(d + min(ri, rj) == max(ri, rj))
        cout << 1 << endl;
    else if(d + min(ri, rj) <= max(ri, rj))
        cout << 2 << endl;
    else if(d < ri + rj)
        cout << 2 << endl;
    else if(d == ri + rj)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> T;
    while(T--){
        cin >> xi >> yi >>ri >> xj >> yj >> rj;
        solve();
    }
    return 0;
}