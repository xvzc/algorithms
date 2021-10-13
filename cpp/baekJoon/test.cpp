
#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int N, cnt, r, c;
int ans;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

void find(int len, int r_base, int c_base) {
    if(r_base == r && c_base == c) {
        ans = cnt;
    }

    if(r >= r_base && r < r_base + len && c >= c_base && c < c_base + len) {
        find(len / 2, r_base, c_base);
        find(len / 2, r_base + len / 2, c_base);
        find(len / 2, r_base, c_base + len / 2);
        find(len / 2, r_base + len / 2, c_base + len / 2);
    } else
        cnt += len * len;

    return;
}

/* ----------------------------------------------- */

// #define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif

    cin >> N >> r >> c;

    find(pow(2, N), 0, 0);
    cout << ans << endl;

    return 0;
}

