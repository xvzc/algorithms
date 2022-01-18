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

struct Circle {
    int x;
    int y;
    int r;
};

/* - GLOBAL VARIABLES ---------------------------- */
int T, N, start_x, start_y, end_x, end_y, x, y, r;
vector<Circle> v;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int solve() {
    int ret = 0;

    for (auto c : v) {
        int start = (c.x - start_x)*(c.x - start_x) + (c.y - start_y)*(c.y - start_y) - c.r*c.r;
        int end  = (c.x - end_x)*(c.x - end_x) + (c.y - end_y)*(c.y - end_y) - c.r*c.r;

        if (start < 0)
            ret++;
        if (end < 0)
            ret++;

        if (start < 0 && end < 0)
            ret-=2;
    }

    return ret;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> T;
    while(T--) {
        v.clear();

        cin >> start_x >> start_y >> end_x >> end_y;
        cin >> N;

        while(N--) {
            cin >> x >> y >> r;
            v.push_back({x, y, r});
        }

        cout << solve() << endl;
    }

    return 0;
}

