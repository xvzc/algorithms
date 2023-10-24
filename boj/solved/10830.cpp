#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second
#define MOD 1000

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
vector<vector<int>> multiply_matrix(vector<vector<int>> m1, vector<vector<int>> m2, int mod) {
    vector<vector<int>> ret(m1[0].size(), vector<int>(m1.size(), 0));
    int n = m1.size();
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                ret[i][j] = ((ret[i][j] % mod) + (((long long)m1[i][k] % mod) * ((long long)m2[k][j] % mod)) % mod) % mod;
            }
        }
    }

    return ret;
}
/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int n;
    ll b; cin >> n >> b;

    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cin >> m[i][j];
    }

    vector<vector<int>> answer(n, vector<int>(n, 0));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i == j) answer[i][j] = 1;
        }
    }

    while(b) {
        if(b % 2)
            answer = multiply_matrix(answer, m, MOD);

        b = b >> 1;
        m = multiply_matrix(m, m, MOD);
    }

    for(auto v : answer) {
        for(auto i : v) {
            cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}

