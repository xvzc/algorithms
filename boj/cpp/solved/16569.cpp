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
struct volcano {
    int x;
    int y;
    int bomb_t;
};

struct state {
    int x;
    int y;
    int cur_t;
};

int M, N, V, X, Y;

int dx[] = {-1, 1, 0,  0};
int dy[] = { 0, 0, 1, -1};

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool is_out_of_index(int x, int y) {
    return y < 1 || x < 1 || y > N || x > M;
}

int distance(volcano v, int x, int y) {
    return abs(x - v.x) + abs(y - v.y);
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> M >> N >> V >> X >> Y;

    vector<vector<int>> height(M + 1, vector<int>(N + 1));
    vector<vector<bool>> visited(M + 1, vector<bool>(N + 1));
    vector<volcano> v(V + 1);

    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> height[i][j];
        }
    }

    for (int i = 1; i <= V; ++i) {
        cin >> v[i].x;
        cin >> v[i].y;
        cin >> v[i].bomb_t;

        visited[v[i].x][v[i].y] = true;
    }

    queue<state> q;
    q.push({X, Y, 0});
    visited[X][Y] = true;

    int max_h = INT_MIN;
    int min_t = INT_MAX;

    while(!q.empty()) {
        state s = q.front();
        q.pop();

        if (max_h < height[s.x][s.y]) {
            max_h = height[s.x][s.y];
            min_t = s.cur_t;
        }

        for (int i = 0 ; i < 4; ++i) {
            int nx = s.x + dx[i];
            int ny = s.y + dy[i];

            if (is_out_of_index(nx, ny)) {
                continue;
            }

            if (visited[nx][ny]) {
                continue;
            }

            bool is_possible = true;
            for (int j = 1; j <= V; ++j) {
                if (s.cur_t - v[j].bomb_t + 1 >= distance(v[j], nx, ny)){
                    is_possible = false;
                }
            }

            if (!is_possible) {
                continue;
            }

            q.push({nx, ny, s.cur_t + 1});
            visited[nx][ny] = true;
        }
    } 

    cout << max_h << ' ' << min_t << endl;

    return 0;
}

