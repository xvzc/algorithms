#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
vector<vector<int>> campus = {
    {1, 2}, 
    {0, 2, 3}, 
    {0, 1, 3, 4}, 
    {1, 2, 4, 5}, 
    {2, 3, 5, 7},
    {3, 4, 6},
    {5, 7},
    {4, 6}
};

int dp[100001][8];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    dp[1][1] = 1;
    dp[1][2] = 1;

    int D; cin >> D;

    for (int i = 2; i <= D; ++i) {
        for (int j = 0; j < 8; ++j) {
            for (int k = 0; k < campus[j].size(); ++k) {
                dp[i][j] = (dp[i][j] % 1000000007 + dp[i-1][campus[j][k]] % 1000000007) % 1000000007;
            }
        }
    }

    cout << dp[D][0];


    return 0;
}

