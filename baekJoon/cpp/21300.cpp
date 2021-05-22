#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, j, k;
int x, sum;

void solve(){
    for(i = 0; i < 6; i++){
        cin >> x;
        sum+=5*x;
    }
    cout << sum;

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