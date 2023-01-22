#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
ll i, j, k, T, N, M;
ll nCr[31][31];


void solve(){
    cin >> N >> M;

    cout << nCr[M][M-N] << endl;

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    nCr[1][0] = 1; nCr[1][1] = 1;
    for (i = 2; i <= 30; i++){ 
        nCr[i][0] = 1;
        for (j = 1; j <= 30; j++)
            nCr[i][j] = nCr[i - 1][j - 1] + nCr[i - 1][j];
    }

    cin >> T;

    for(i=0; i < T; i++){
        solve();
    }

    return 0;
}