#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#define MAX_CITY 1001

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
vector<pair<int, int>> cities[MAX_CITY];
ll dist[MAX_CITY];
int trace[MAX_CITY];
int n, m, from, to;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void djikstra() {
    priority_queue<pair<ll, int>> pq;
    pq.push({0, from});
    dist[from] = 0;

    while(!pq.empty()) {
        ll dist_to_cur = -pq.top().fi;
        int cur_idx = pq.top().se;
        pq.pop();

        if (dist_to_cur > dist[cur_idx]) {
            continue;
        }

        for (auto next : cities[cur_idx]) {
            ll dist_to_next = dist_to_cur + next.fi;
            int next_idx = next.se;

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

    for (int i = 0; i < MAX_CITY; ++i) {
        dist[i] = LLONG_MAX;
    }

    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int x, y, d; cin >> x >> y >> d;
        cities[x].push_back({d, y});
    }

    cin >> from >> to;

    djikstra();

    cout << dist[to] << endl;
    
    vector<int> path;
    int temp = to;
    while (temp) {
        path.push_back(temp);
        temp = trace[temp];
    }

    cout << path.size() << endl;

    reverse(path.begin(), path.end());

    for (auto i : path) {
        cout << i << ' ';
    }

    return 0;
}

