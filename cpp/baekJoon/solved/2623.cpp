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
int N, M, x;
vector<int> singer[1001];
int indeg[1001];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> M;
    while (M--) {
        int x; cin >> x;
        int prv = -1;
        while (x--) {
            int a; cin >> a;

            if (prv != -1) {
                singer[prv].push_back(a);
                indeg[a]++;
            }

            prv = a;
        }

    }

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
        }
    }

    vector<int> order;
    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto next : singer[front]) {
            if (--indeg[next] == 0) {
                q.push(next);
            }
        }

        order.push_back(front);
    }

    if (order.size() != N) {
        cout << 0 << endl;
        return 0;
    }

    for (auto i : order) {
        cout << i << endl;
    }

    return 0;
}
