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
int N, E, v1, v2;
vector<pair<int, int>> edges[200001];
ll dist[801][801];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void dijkstra(int from) {
    priority_queue<pair<ll, int>> pq;

    dist[from][from] = 0;
    pq.push({dist[from][from], from});

    while(!pq.empty()) {
        ll dist_to_cur = -pq.top().fi;
        int cur_idx = pq.top().se;

        pq.pop();

        if (dist_to_cur > dist[from][cur_idx]) {
            continue;
        }

        for (int i = 0; i < edges[cur_idx].size(); ++i) {
            ll dist_to_next = dist_to_cur + edges[cur_idx][i].se;
            int next_idx = edges[cur_idx][i].fi;

            if (dist_to_next < dist[from][next_idx]) {
                dist[from][next_idx] = dist_to_next;
                pq.push({-dist_to_next, next_idx});
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

    cin >> N >> E;
    int a, b, c;
    for (int i = 0; i < E; ++i) {
        cin >> a >> b >> c;
        edges[a].push_back({b, c});
        edges[b].push_back({a, c});
    }

    cin >> v1 >> v2;
    for (int i = 0; i < 801; ++i) {
        for (int j = 0; j < 801; ++j) {
            dist[i][j] = LLONG_MAX;
        }
    }

    dijkstra(1);
    dijkstra(v1);
    dijkstra(v2);

    ll case1 = LLONG_MAX, case2 = LLONG_MAX;

    if (dist[1][v1] != LLONG_MAX && dist[v1][v2] != LLONG_MAX && dist[v2][N] != LLONG_MAX)
        case1 = dist[1][v1] + dist[v1][v2] + dist[v2][N];

    if (dist[1][v2] != LLONG_MAX && dist[v2][v1] != LLONG_MAX && dist[v1][N] != LLONG_MAX)
        case2 = dist[1][v2] + dist[v2][v1] + dist[v1][N];

    ll ans = min(case1, case2);

    if (ans == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}

