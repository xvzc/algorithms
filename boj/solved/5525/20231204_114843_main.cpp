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
int DP[1000001] = {0, };
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int n, m; cin >> n >> m;
    string p, s; cin >> s;

    int answer = 0, length = 0;
    for (int i = 0; i <= m - 2; ++i) {
        if(s[i] == 'O') {
            continue;
        }
        else {
            if(s[i + 1] == 'O' && s[i + 2] == 'I') {
                ++i;
                ++length;

                if(length >= n)
                    answer++;

            } else {
                length = 0;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
