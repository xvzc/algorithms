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
vector<int> answer;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, M, K, X; cin >> N >> M >> K >> X;
    vector<vector<int>> cities(N + 1);

    for (int i = 0; i < M; ++i) {
        int x, y; cin >> x >> y;
        cities[x].push_back(y);
    }

    vector<bool> visited(N + 1);

    queue<pair<int, int>> q;

    q.push({X, 0});
    visited[X] = true;

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        for (auto next : cities[cur.fi]) {
            if (visited[next]) {
                continue;
            }

            visited[next] = true;
            q.push({next, cur.se + 1});
        }

        if (cur.se == K) {
            answer.push_back(cur.fi);
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }

    sort(answer.begin(), answer.end());

    for (auto i : answer) {
        cout << i << endl;
    }

    return 0;
}

