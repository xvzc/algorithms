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
int T, N, K, X, Y, W;
vector<int> times;
vector<int> indeg;
vector<int> total_time_to;
vector<vector<int>> nodes;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int solve() {
    queue<int> q;

    for (int i = 1; i <= N; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
            total_time_to[i] = times[i];
        }
    }

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (auto next : nodes[cur]) {
            indeg[next]--;
            if (indeg[next] == 0) {
                q.push(next);
            }

            if (total_time_to[next] < total_time_to[cur] + times[next]) {
                total_time_to[next] = total_time_to[cur] + times[next];
            }
        }
    }

    return total_time_to[W];
}

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> T;
    while (T--) {
        cin >> N >> K;

        times.clear();
        indeg.clear();
        nodes.clear();
        total_time_to.clear();

        times.resize(N + 1);
        indeg.resize(N + 1);
        nodes.resize(N + 1);
        total_time_to.resize(N + 1);

        for (int i = 1; i <= N; ++i) {
            cin >> times[i];
        }

        for (int i = 0; i < K; ++i) {
            cin >> X >> Y;
            nodes[X].push_back(Y);
            indeg[Y]++;
        }

        cin >> W;

        cout << solve() << endl;
    }

    return 0;
}
