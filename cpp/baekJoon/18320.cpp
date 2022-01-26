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
const ll MAX = 1000000000000;
ll N, K, M, G, X;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> K >> M;

    ll xl = 0; 
    ll xr = MAX;
    ll X = xl + xr / 2;
    while (xl <= xr) {
        ll gl = 0;
        ll gr = MAX; 
        ll G = gl + gr / 2;
        while (gl <= gr) {
            ll Y = (ll)((double)(N - G) / X);
            Y = Y < M ? M : Y;
        }

        X = X + xl;
    }

    return 0;
}

