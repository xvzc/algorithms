#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

// #define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    int n, m; cin >> n >> m;

    vector<set<int>> v(n+1);

    int x, y;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        v[x].insert(y);
        v[y].insert(x);
    }

    int i = 0;
    for(auto s : v) {
        cout << i++ << ' ';
        for(auto it : s) {
            cout << it << ' ';
        }
        cout << endl;
    }


    return 0;
}

