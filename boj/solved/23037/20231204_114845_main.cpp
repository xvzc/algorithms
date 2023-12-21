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
    string s;
    cin >> s;

    int answer = 0;
    for(int i = 0; i < s.size(); ++i) {
        int x = 1;
        int num = s[i] - 48;
        for(int j = 0; j < 5; ++j) {
            x *= num;
        }
        answer += x;
    }
    cout << answer;

    return 0;
}

