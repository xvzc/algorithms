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
 
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, K; cin >> N >> K;

    vector<int> share(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> share[i];
    }

    vector<int> my(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> my[i];
    }

    for (int k = 0; k < K; ++k) {
        int maxi = INT_MIN;
        int max_my_idx;
        for (int i = 0; i < my.size(); ++i) {
            if (my[i] == - 10001) continue;

            for (int j = 0; j < N; ++j) {
                int cur = my[i]*share[j];
                if (maxi <= cur) {
                    maxi = cur;
                    max_my_idx = i;
                }
            }
        }

        my[max_my_idx] = -10001;
    }

    int ans = INT_MIN;
    for (int i = 0; i < share.size(); ++i) {
        for (int j = 0; j < my.size(); ++j) {
            if (my[j] == -10001) continue;

            ans = max(ans, share[i]*my[j]);
        }
    }

    cout << ans << endl;

    return 0;
}
