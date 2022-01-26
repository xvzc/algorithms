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
    ll xm = xl + xr / 2;
    ll X = LLONG_MAX;
    while (xl < xr) {
        ll gl = 0;
        ll gr = MAX; 
        ll gm = gl + gr / 2;
        ll G = LLONG_MAX;
        while (gl < gr) {
            ll gY = ((double)(N - gm) / xm);
            gY = gY < M ? M : gY;
            ll gdays = (N - gm) / gY;

            if ((N - gm) % gY) {
                gdays++;
            }

            if (gdays < K) {
                gr = gm - 1;
            }

            if (gdays >= K) {
                gl = gm + 1;
            }

            if (gdays >= K && gm < G) {
                G = gm;
            }

            gm = gr + gl / 2;
        }

        if (G == LLONG_MAX) {
            continue;
        }

        ll xY = ((double)(N - G) / xm);
        xY = xY < M ? M : xY;
        ll xdays = (N - G) / xY;

        if ((N - G) % xY) {
            xdays++;
        }

        if (xdays < K) {
            xl = xm + 1;
        }

        if (xdays >= K) {
            xr = xm - 1;
        }

        xm = xl + xr / 2;

        if (xdays >= K && xm < X) {
            X = xm;
        }
    }

    cout << X << endl;

    return 0;
}

