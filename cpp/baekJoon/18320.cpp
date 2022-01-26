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
ll N, K, M;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
ll get_days(ll G, ll X) {
    ll amount = (N - G) / X;


    if (amount < M) {
        amount = M;
    }

    ll days = (N - G) / amount + 1;

    if ((N - G) % amount) {
        days++;
    }

    return days;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> K >> M;

    ll g_left = 1, g_right = N, g_mid, G = N + 1, X = -1;
    while (g_left <= g_right) {
        g_mid = g_left + (g_right - g_left) / 2;

        ll x_left = 1, x_right = N, x_mid;
        while (x_left <= x_right) {
            x_mid = x_left + (x_right - x_left) / 2;

            ll days = get_days(g_mid, x_mid);

            if (days >= K && X < x_mid) {
                X = x_mid;
                break;
            }

            if (days < K) {
                x_left = x_mid + 1;
            }

            if (days > K) {
                x_right = x_mid - 1;
            }
        }

        for (ll i = X; X >= 1; --i) {
            if (get_days(g_mid, i) >= K) {
                X = i;
            } else {
                break;
            }
        }

        break;
    }

    cout << X << endl;

    return 0;
}
