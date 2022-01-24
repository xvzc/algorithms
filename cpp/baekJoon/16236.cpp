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
const int INF = 2e9;
int N, eaten, baby_size, answer;
int fishes[22][22], check[22][22];
int dy[] = {1, -1,  0, 0};
int dx[] = {0,  0, -1, 1};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void clear_check() {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            check[i][j] = INF;
        }
    }
}

bool is_out_of_index(int y, int x) {
    return y < 0 || x < 0 || y >= N || x >= N;
}

pair<int, int> find_fish(pair<int, int> start) {
    pair<int, int> next_loc = {INF, INF};
    queue<pair<int, int>>  q;

    q.push({start.fi, start.se});
    check[start.fi][start.se] = 0;

    while (!q.empty()) {
        int y = q.front().fi;
        int x = q.front().se;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (is_out_of_index(y, x)) {
                continue;
            }

            if (check[ny][nx] != INF) {
                continue;
            }

            if (fishes[ny][nx] > baby_size) {
                continue;
            }

            check[ny][nx] = check[y][x] + 1;
            q.push({ny, nx});
        }
    }

    int min_dist = INF;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (min_dist > check[i][j] && fishes[i][j] != 0 && fishes[i][j] != baby_size) {
                min_dist = check[i][j];
                next_loc = {i, j};
            }
        }
    }

    return next_loc;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N;

    pair<int, int> cur_loc;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> fishes[i][j];

            if (fishes[i][j] == 9) {
                cur_loc = {i, j};
                fishes[i][j] = 0;
            }
        }
    }

    baby_size = 2, answer = 0, eaten = 0; 
    while (true) {
        clear_check();

        pair<int, int> next_loc = find_fish(cur_loc);

        if (next_loc == make_pair(INF, INF)) {
            break;
        }

        eaten++;
        if (eaten == baby_size) {
            baby_size++;
            eaten = 0;
        }

        fishes[next_loc.fi][next_loc.se] = 0;
        answer += check[next_loc.fi][next_loc.se];

        cur_loc = next_loc;
    }

    cout << answer << endl;

    return 0;
}
