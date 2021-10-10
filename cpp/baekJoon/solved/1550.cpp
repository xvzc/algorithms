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
int get_weight(char c) {
    if( c >= '0'  && c <= '9')
        return int(c) - 48;

    if( c >= 'A'  && c <= 'F')
        return int(c) - 55;

    return 0;
}
/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    string s;
    cin >> s;

    int ans = 0;
    int base = 1;
    for(int i = s.size()-1; i >= 0; --i) {
        ans += get_weight(s[i]) * base;
        base *= 16;
    }

    cout << ans;

    return 0;
}

