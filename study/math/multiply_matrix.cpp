#include <bits/stdc++.h>

using namespace std;

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
