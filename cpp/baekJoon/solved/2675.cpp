#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
ll i, j, k;
ll repeat;
string s;


void solve(){
    cin >> repeat;
    cin >> s;
    for(i = 0; i < s.length(); i++){
        for (j = 0; j < repeat; ++j) {
            cout << s[i];
        }
    }
    cout << endl;

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
    ll T;
    cin >> T;
    for(int i = 0; i < T; i++){
        solve();
    }
    return 0;
}