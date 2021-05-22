#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int x, y;


void solve(){
    cin >> x >> y;

    if(x > 0 && y > 0)
        cout << 1 << endl;
    if(x < 0 && y > 0)
        cout << 2 << endl;
    if(x < 0 && y < 0)
        cout << 3 << endl;
    if(x > 0 && y < 0)
        cout << 4 << endl;
    /* CODE */

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    solve();
    return 0;
}