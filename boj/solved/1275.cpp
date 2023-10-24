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
int x;
vector<ll> segment_tree; 
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void init(int n) {
    for(x = 1; x < n; x*=2);

    segment_tree = vector<ll>(2*x, 0);

    for(int i = x; i-x < n; ++i) 
        cin >> segment_tree[i];

    for(int i = x-1; i > 0; --i)
        segment_tree[i] = segment_tree[2*i] + segment_tree[2*i+1];
}

ll query(int start, int end) {
    ll answer = 0;

    start += x-1;
    end += x-1;
    while(start <= end) {
        if(start % 2 == 1)
            answer+=segment_tree[start];
        if(end % 2 == 0)
            answer+=segment_tree[end];

        start = (start+1)/2;
        end = (end-1)/2;
    }

    return answer;
}

void update(int idx, int value) {
    idx += x-1;
    segment_tree[idx] = value; 
    idx /= 2;

    while(idx > 0) {
        segment_tree[idx] = segment_tree[2*idx] + segment_tree[2*idx + 1];
        idx /= 2;
    }
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int n, q; cin >> n >> q;
    init(n);
    for(int i = 0; i < q; ++i) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        cout << query(a < b ? a : b, b > a ? b : a) << endl;
        update(c, d);
    }

    return 0;
}
