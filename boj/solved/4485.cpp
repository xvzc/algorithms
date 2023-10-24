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
int N;
int dx[] = {-1, 1,  0, 0};
int dy[] = { 0, 0, -1, 1};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool is_out_of_index(int y, int x, int size) {
    return y < 0 || x < 0 || y >= size || x >= size;
}

int dijkstra(vector<vector<int>> v) {
    vector<vector<int>> distances(N, vector<int>(N));
    for (int i = 0; i < distances.size(); ++i) {
        for (int j = 0; j < distances[i].size(); ++j) {
            distances[i][j] = INT_MAX;
        }
    }

    priority_queue<pair<int, pair<int, int>>> pq;
    distances[0][0] = v[0][0];
    pq.push({-distances[0][0], {0, 0}});

    while (!pq.empty()) {
        int dist_to_cur = -pq.top().fi;
        pair<int, int> cur_loc = pq.top().se;
        pq.pop();

        if (dist_to_cur > distances[cur_loc.fi][cur_loc.se]) {
            continue;
        }

        for (int i = 0; i < 4; ++i) {
            int ny = cur_loc.fi + dy[i];
            int nx = cur_loc.se + dx[i];

            if (is_out_of_index(ny, nx, v.size())) {
                continue;
            }

            int dist_to_next = dist_to_cur + v[ny][nx];
            pair<int, int> next_loc = {ny, nx};
            if (dist_to_next < distances[ny][nx]) {
                distances[ny][nx] = dist_to_next;
                pq.push({-dist_to_next,{ny, nx}});
            }
        }
    }

    return distances[N-1][N-1];
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int test_case = 0;
    while (true) {
        cin >> N;
        test_case++;

        if (N == 0) {
            break;
        }

        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> v[i][j];
            }
        }

        cout << "Problem " << test_case << ": " << solve(v) << endl;
    }

    return 0;
}

