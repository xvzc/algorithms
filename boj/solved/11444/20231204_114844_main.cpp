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

vector<vector<int>> matrix_power(vector<vector<int>> m, ull x, int mod) {
    vector<vector<int>> ret(m.size(), vector<int>(m.size(), 0));
    for (int i = 0; i < ret.size(); ++i)
        for(int j = 0; j < ret.size(); ++j)
            if(i == j) ret[i][j] = 1;

    while(x) {
        if(x % 2)
            ret = multiply_matrix(ret , m, mod);

        x = x >> 1;
        m = multiply_matrix(m, m, mod);
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

    vector<vector<int>> E = {
                             {1, 1}, 
                             {1, 0}
                            };
    vector<vector<int>> first = {
                                 {1}, 
                                 {0}
                                };

    ull n; cin >> n;
    vector<vector<int>> ret = matrix_power(E, n, 1000000007);

    ret = multiply_matrix(ret, first, 1000000007);
    cout << ret[1][0] << endl;

    return 0;
}
