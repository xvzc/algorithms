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

    vector<int> a(n, 0);
    vector<int> b(n, 0);

    for(int i = 0 ; i < n; ++i) {
        cin >> a[i];
    }

    for(int i = 0 ; i < n; ++i) {
        cin >> b[i];
    }

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        ans += a[i]*b[i];
    }

    cout << ans;

    return 0;
}

