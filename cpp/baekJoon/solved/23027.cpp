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
    string s; cin >> s;
    string dict = "ABCDF";
    char change;
    int idx;
    if(s.find("A") != string::npos) {
        idx = 1;
        change = 'A';
    } else if(s.find("B") != string::npos) {
        idx = 2;
        change = 'B';
    } else if(s.find("C") != string::npos) {
        idx = 3;
        change = 'C';
    } else {
        for(int i = 0; i < s.size(); ++i) cout << 'A';
        return 0;
    }

    for(auto &c : s) {
        for(int i = idx; i < dict.size(); ++i)
            if (c == dict[i]) c = change;
    }

    cout << s;

    return 0;
}

