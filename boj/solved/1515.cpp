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
    string erase; cin >> erase;

    int num = 1;
    string recover = "1";
    int x = 0, y = 0;
    while(x < erase.size()) {
        for(int i = y; i < recover.size(); ++i) {
            if(erase[x] == recover[i]) {
                x++;
                y = i;
            }
        }

        y++;
        recover+=to_string(++num);
    }
    cout << num-1;

    return 0;
}

