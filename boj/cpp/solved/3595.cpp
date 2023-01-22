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
struct box {
    int x;
    int y;
    int z;
};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    int answer = INT_MAX;
    box bx;

    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            int a = i;
            int m = n/i;

            for (int j = 1; j <= sqrt(m); ++j) {
                if (m % j == 0) {
                    int b = j;
                    int c = m/j;
                    int s = a*b*2 + a*c*2 + b*c*2;

                    if (s <= answer) {
                        answer = s;
                        bx.x = a;
                        bx.y = b;
                        bx.z = c;
                    }
                }
            }
        }
    }

    cout << bx.x << ' ' << bx.y << ' ' << bx.z; 

    return 0;
}
