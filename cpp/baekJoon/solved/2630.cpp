#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL -------------------------------------- */
bool colors[128][128];
int blue_total, white_total;
/* ----------------------------------------------- */

/* - FUNCTION ------------------------------------ */
void dfs(int x, int y, int n) {
    int blue = 0;
    int white = 0;

    for (int i = y; i < y + n; ++i) {
        for (int j = x; j < x + n; ++j) {
            if (colors[i][j])
                blue++;
            else
                white++;
        }
    }

    if (blue == n*n) {
        blue_total++;
        return;
    }

    if (white == n*n) {
        white_total++;
        return;
    }

    dfs(x, y, n / 2); // top left
    dfs(x + n / 2, y, n / 2); // top right
    dfs(x, y + n / 2, n / 2); // bottom left
    dfs(x + n / 2, y + n / 2, n / 2); // bottom right

    return;
}
/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> colors[i][j];
        }
    }

    dfs(0, 0, n);

    cout << white_total << endl;
    cout << blue_total << endl;

    return 0;
}

