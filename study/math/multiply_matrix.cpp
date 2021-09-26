#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> multiply_matrix(vector<vector<int>> v1, vector<vector<int>> v2, int mod) {
    vector<vector<int>> ret(v1[0].size(), vector<int>(v1.size(), 0));
    int n = v1.size();
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            for(int k = 0; k < n; ++k) {
                ret[i][j] = ((ret[i][j] % mod) + (((long long)v1[i][k] % mod) * ((long long)v2[k][j] % mod)) % mod) % mod;
            }
        }
    }

    return ret;
}
