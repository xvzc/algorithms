#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second
#define MOD 1000000007

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int x = 2;
vector<int> segment_tree;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void update(int idx, int val) {
    idx+=x-1;
    segment_tree[idx] = val;
    idx/=2;

    while(idx) {
        segment_tree[idx] = ((ll)segment_tree[idx*2] % MOD * segment_tree[idx*2 + 1] % MOD) % MOD;
        idx/=2;
    }
}

int query(int l, int r) {
    int ret = 1;

    l+=x-1;
    r+=x-1;
    while (l <= r) {
        if (l % 2 == 1) 
            ret = ((ll)ret % MOD * segment_tree[l] % MOD) % MOD;

        if (r % 2 == 0)
            ret = ((ll)ret % MOD * segment_tree[r] % MOD) % MOD;

        l = (l+1)/2;
        r = (r-1)/2;
    }

    return ret;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int n, m, k; cin >> n >> m >> k;

    segment_tree = vector<int>(4*n, 1);

    while(x < n) x*=2;

    for (int i = x; i < x + n; ++i) {
        int temp; cin >> temp;
        segment_tree[i] = temp;
    }

    for (int i = x - 1; i; i--) {
        segment_tree[i] = ((ll)segment_tree[i*2] % MOD * segment_tree[i*2 + 1] % MOD) % MOD;
    }

    int N = m + k;
    while(N--) {
        int a, b, c; cin >> a >> b >> c;
        if (a == 1)
            update(b, c);

        if (a == 2)
            cout << query(b, c) << endl;
    }

    return 0;
}
