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
int cnt[101][101];
int indeg[101];
vector<pair<int, int>> parts[101];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, M; cin >> N >> M;

    while (M--) {
        int x, y, z; cin >> x >> y >> z;
        parts[y].push_back({x, z});
        indeg[x]++;
    }

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
            cnt[i][i] = 1;
        }
    }

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (auto p : parts[cur]) {
            int next = p.fi;
            int need = p.se;
            if (--indeg[next] == 0) {
                q.push(next);
            }

            for (int i = 1; i <= N; ++i) {
                if (cnt[i][cur]) {
                    cnt[i][next] += cnt[i][cur]*need;
                }
            }
        }
    }

    for (int i = 1; i <= N; ++i) {
        if (cnt[i][i]) {
            cout << i << ' ' << cnt[i][N] << endl;
        }
    }

    return 0;
}
