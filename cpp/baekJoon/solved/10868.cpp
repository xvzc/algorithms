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
vector<int> segment_tree;
int x;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int query(int l, int r) {
    int value = INT_MAX;

    l += x-1;
    r += x-1;

    while(l <= r) {
        if(l % 2 == 1) {
            value = min(value, segment_tree[l]);
        }

        if(r % 2 == 0) {
            value = min(value, segment_tree[r]);
        }

        l = (l+1)/2;
        r = (r-1)/2;
    }

    return value;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, M; cin >> N >> M;
    segment_tree = vector<int>(4 * N, INT_MAX);

    for (x = 1; x < N; x *= 2);

    for (int i = x; i < x + N; ++i)
        cin >> segment_tree[i];

    for (int i = x-1; i > 0; --i)
        segment_tree[i] = min(segment_tree[i * 2], segment_tree[i * 2 + 1]);

    int x, y;
    for (int i = 0; i < M; ++i) {
        cin >> x >> y;
        cout << query(x, y) << endl;
    }

    return 0;
}

