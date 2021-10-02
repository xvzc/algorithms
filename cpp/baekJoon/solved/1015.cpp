#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
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

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    vector<int> ans(n);
    for(int i = 0; i < n; ++i) {
        ans[v[i].second] = i;
    }

    for(auto i : ans)
        cout << i << ' ';

    return 0;
}

