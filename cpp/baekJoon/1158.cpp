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

// #define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int n, k; cin >> n >> k;

    queue<int> q;
    for(int i = 1; i <= n; ++i) {
        q.push(i);
    }

    string ans = "<";
    while(!q.empty()) {
        for(int i = 0; i < k-1; ++i) {
            q.push(q.front());
            q.pop();
        }
        ans += to_string(q.front()) + ", ";
        q.pop();
    }
    cout << ans.substr(0, ans.length()- 2) + ">";

    return 0;
}

