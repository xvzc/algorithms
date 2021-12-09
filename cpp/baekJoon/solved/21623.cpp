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

    int temp, n, k; cin >> n >> k;
    int played = 0;
    int cur = k;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if(cur - temp >= 0) {
            cur -= temp;
        }


        if(cur == 0) {
            played++;

            if(i == n-1)
                continue;

            cur = k;
        }
    }

    cout << played << endl;
    cout << cur << endl;


    return 0;
}

