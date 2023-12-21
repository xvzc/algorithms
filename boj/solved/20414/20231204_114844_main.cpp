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
int N, b, s, g, p, d;
string history;
unordered_map<char, pair<int, int>> level;
int dp[36];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N;
    cin >> s >> g >> p >> d;
    cin >> history;

    level['B'] = {0, s-1};
    level['S'] = {s, g-1};
    level['G'] = {g, p-1};
    level['P'] = {p, d-1};
    level['D'] = {d, d*2};

    dp[0] = history[0] == 'D' ? level[history[0]].fi : level[history[0]].se;

    for (int i = 1; i < N; ++i) {
        if (history[i] == 'D') {
            dp[i] = d;
            continue;
        }

        int cur = dp[i] + dp[i - 1];
        if (cur < level[history[i]].se) {
            dp[i] = level[history[i]].se - dp[i - 1];
            continue;

        } else if (cur > level[history[i]].se) {
            dp[i] = 0;
            dp[i - 1] = level[history[i]].se;
            for (int j = i - 1; j > 1; --j) {
                if (dp[j] + dp[j - 1] > level[history[j]].se){
                    dp[j - 1] = level[history[j]].se - dp[j];
                } else {
                    break;
                }
            }

        }
    }

    int answer = accumulate(dp, dp + N, answer);
    cout << answer << endl;

    return 0;
}

