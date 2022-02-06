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
int T, N, K, X, Y, D, W;
vector<vector<int>> rules;
vector<int> t;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int solve(int target) {
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 7));

    for (int i = 1; i <= N; ++i) {
        if (rules[i].empty()) {
            dp[i][i] = t[i];
        }

        for (int j = 0; j < rules[i].size(); ++j) {
            dp[rules[i][j]][i] = t[rules[i][j]] + t[i];
        }
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int maxi = INT_MIN;

            if (rules[j].empty()) {
                continue;
            }

            for (int k = 0; k < rules[j].size(); ++k) {
                maxi = max(maxi, t[rules[j][k]]);
            }

            int mini = INT_MAX;
            for (int k = 1; k <= N; ++k) {
                mini = min(mini, dp[k][i]);
            }

            dp[i][j] = min(mini + maxi, dp[i][j]);

        }
    }

    for (auto v : dp) {
        for (auto i : v) {
            cout << ' ' << i;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> T;

    while (T--) {
        rules.clear();
        t.clear();

        cin >> N >> K;

        rules = vector<vector<int>>(N + 1);
        t= vector<int> (N + 1);

        for (int i = 1; i <= N; ++i) cin >> t[i];

        for (int i = 1; i <= K; ++i) {
            cin >> X >> Y;
            rules[Y].push_back(X);
        }

        for (auto v : rules) {
            for (auto i : v) {
                cout << i << ' ';
            }
            cout << endl;
        }


        cin >> W;

        cout << solve(W) << endl;
    }

    return 0;
}
