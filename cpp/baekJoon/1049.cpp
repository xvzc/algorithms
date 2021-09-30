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
    int _min = 1e9;

    int n, m; cin >> n >> m;

    int pack, unit;
    int pack_min = 2e9, unit_min = 2e9;
    for(int i = 0; i < m; ++i) {
        cin >> pack >> unit;
        pack_min = min(pack, pack_min);
        unit_min = min(unit, unit_min);
    }

    int unit_total = n * unit_min;
    int pack_total = ( n / 6 ) * pack_min + (n % 6 ? 1 : 0) * pack_min;
    int mix_total = ( n / 6 ) * pack_min + (n % 6) * unit_min;

    _min = min(unit_total, min(pack_total, mix_total));

    cout << _min;

    return 0;
}

