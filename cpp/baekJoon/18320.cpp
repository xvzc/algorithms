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
ll N, K, M, maxx = LLONG_MAX;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool calculate(ll X) {
    ll R = N;
    ll days = 0;

    while (1) {
        ll Y = R / X;

        if (Y <= M) {
            ll ret = days + (R + M - 1) / M;
            return ret <= K;
        }
        
        ll cur_left = Y*X;
        ll days_left = (R - cur_left + Y) / Y;

        days += days_left;

        if (days > K) {
            return false;
        } 

        R -= days_left*Y;
        if (R <= 0) {
            break;
        }
    }

    return days <= K;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> K >> M;

    ll lo = 1, hi = N, mid = (lo + hi) / 2;
    ll answer = -1;
    while(lo <= hi) {
        mid = (lo + hi) / 2;

        if (calculate(mid)) {
            lo = mid + 1;
            answer = mid;
        } else {
            hi = mid - 1;
        }
    }

    cout << answer << endl;

    return 0;
}
