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
int dp[50001];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N; cin >> N;
    dp[1] = 1;

    for (int i = 2; i <= 50000; ++i) {
        int mini = 1e9;
        for (int j = 1; j*j <= i; ++j) {
            mini = min(mini, dp[i - j*j]);
        }
        dp[i] = mini + 1;
    }

    cout << dp[N] << endl;

    return 0;
}

