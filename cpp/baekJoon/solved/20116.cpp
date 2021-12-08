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
ll sum[200005];
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    ll n, l, x; cin >> n >> l;
    for(int i = 1; i <= n; ++i) {
        cin >> x;
        sum[i] = sum[i-1] + x;
    }

    bool is_stable = true;
    pair<int, int> center;
    for(int i = 1; i < n; ++i) {
        int base = sum[i] - sum[i-1];
        int rest = sum[n] - sum[i];
        center = make_pair(base - l, base + l);

        double avg = (double)rest / (n - i);


        if(center.fi >= avg || center.se <= avg) {
            debug << "-----" << endl;
            debug << center.fi << ' ' << center.se << endl;
            debug << avg << endl;
            debug << i << endl;
            debug << "-----" << endl;
            is_stable = false;
            break;
        }
    }

    if(is_stable)
        cout << "stable" << endl;
    else
        cout << "unstable" << endl;

    return 0;
}

