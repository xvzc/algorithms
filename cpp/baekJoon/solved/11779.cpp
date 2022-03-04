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
vector<pair<int, int>> cities[1001];
int dist[1001];
int trace[1001];
int from, to;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void djikstra() {
    priority_queue<pair<int, int>> pq;
    pq.push({0, from});
    dist[from] = 0;

    while (!pq.empty()) {
        int dist_to_cur = -pq.top().fi;
        int cur_idx = pq.top().se;
        pq.pop();

        if (dist_to_cur > dist[cur_idx]) {
            continue;
        }

        for (int i = 0; i < cities[cur_idx].size(); ++i) {
            int dist_to_next = dist_to_cur + cities[cur_idx][i].fi;
            int next_idx = cities[cur_idx][i].se;

            if (dist_to_next < dist[next_idx]) {
                dist[next_idx] = dist_to_next;
                pq.push({-dist_to_next, next_idx});
                trace[next_idx] = cur_idx;
            }
        }
    }
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int n, m; cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int x, y, d; cin >> x >> y >> d;
        cities[x].push_back({d, y});
    }

    cin >> from >> to;

    for (int i = 0; i < 1001; ++i) {
        dist[i] = INT_MAX;
    }

    djikstra();

    int temp = to;

    vector<int> path;
    while (temp) {
        path.push_back(temp);
        temp = trace[temp];
    }

    cout << dist[to] << endl;

    cout << path.size() << endl;

    reverse(path.begin(), path.end());

    for (auto i : path) {
        cout << i << ' ';
    }

    return 0;
}

