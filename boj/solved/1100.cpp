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
    vector<string> v(8);
    for(int i = 0; i < 8; ++i) cin >> v[i];

    int answer = 0;
    bool is_white;
    for(int i = 0; i < 8; ++i) {
        is_white = i % 2 ? false : true;
        for(int j = 0; j < 8; ++j) {
            if(v[i][j] == 'F' && is_white)
                answer++;

            is_white = !is_white;
        }
    }

    cout << answer;


    return 0;
}

