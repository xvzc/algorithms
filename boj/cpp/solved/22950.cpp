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
    string s; cin >> s;
    int m; cin >> m;

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '1' && i < m) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}

