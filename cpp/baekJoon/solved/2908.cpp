#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
ll i, d;
string s1, s2;
int n1, n2;



void solve(){
    cin >> s1 >> s2;

    d = 1;
    for(i=0; i < 3; ++i){
        n1 += d*(s1[i] - '0');
        n2 += d*(s2[i] - '0');
        d *= 10;
    }
    cout << max(n1, n2) << endl;
    /* CODE */

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    solve();
    return 0;
}