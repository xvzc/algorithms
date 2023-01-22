#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second
#define MAX 100

typedef long long ll;
typedef unsigned long long ull;
int a[MAX][MAX];
int b[MAX][MAX];
int answer[MAX][MAX];

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int an, am; cin >> an >> am;

    for (int i = 0; i < an; ++i) {
        for (int j = 0; j < am; ++j)
            cin >> a[i][j];
    }

    int bn, bm; cin >> bn >> bm;

    for (int i = 0; i < bn; ++i) {
        for (int j = 0; j < bm; ++j)
            cin >> b[i][j];
    }

    for (int i = 0; i < an; ++i) {
        for (int j = 0; j < bm; ++j) {
            for(int k = 0; k < am; ++k) {
                answer[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < an; ++i) {
        for (int j = 0; j < bm; ++j) {
            cout << answer[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

