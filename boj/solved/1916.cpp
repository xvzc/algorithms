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
int N, M;
vector<pair<int, int>> edges[100001];
ll dist[1001];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void dijkstra(int start) {
    priority_queue<pair<int, int>> pq;

    dist[start] = 0;
    pq.push({dist[start], start});

    while (!pq.empty()) {
        int dist_to_cur = -pq.top().fi;
        int cur_idx = pq.top().se;

        pq.pop();

        if (dist_to_cur > dist[cur_idx]) {
            continue;
        }

        for (int i = 0; i < edges[cur_idx].size(); ++i) {
            int dist_to_next = dist_to_cur + edges[cur_idx][i].se;
            int next_idx = edges[cur_idx][i].fi;

            if (dist[next_idx] > dist_to_next) {
                dist[next_idx] = dist_to_next;
                pq.push({-dist[next_idx], next_idx});
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

    for (int i = 0; i <= 1000; ++i) {
        dist[i] = INT_MAX;
    }

    cin >> N >> M;
    int start, end, price;
    for (int i = 0; i < M; ++i) {
        cin >> start >> end >> price;
        edges[start].push_back({end, price});
    }

    cin >> start >> end;

    dijkstra(start);

    cout << dist[end];

    return 0;
}
