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

struct compare {
    bool operator()(pair<int, int>&p1, pair<int, int>&p2) {
        return p1.se > p2.se;
    }
};

/* - GLOBAL VARIABLES ---------------------------- */
vector<pair<int, int>> edges[300001];
int dist[20001];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

void dijkstra(int start) {
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, compare>  pq;
    pq.push({start, 0});

    while(!pq.empty()) {
        int cur_idx = pq.top().fi;
        int dist_to_cur = pq.top().se;

        pq.pop();

        if (dist[cur_idx] < dist_to_cur) {
            continue;
        }

        for (int i = 0; i < edges[cur_idx].size(); ++i) {
            int next_idx = edges[cur_idx][i].fi;
            int dist_to_next = dist_to_cur + edges[cur_idx][i].se;

            if (dist[next_idx] > dist_to_next) {
                dist[next_idx] = dist_to_next;
                pq.push({next_idx, dist_to_next});
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

    int V, E; cin >> V >> E;
    int K; cin >> K;

    int u, v, w;
    for (int i = 0; i < E; ++i) {
        cin >> u >> v >> w;
        edges[u].push_back({v, w});
    }

    for (int i = 1; i <= V; ++i) {
        dist[i] = 987654321;
    }

    dijkstra(K);

    for (int i=1; i <= V; ++i){
        if (dist[i] == 987654321) {
            cout << "INF" << endl;
            continue;
        }

        cout << dist[i] << endl;
    }


    return 0;
}
