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
int maze[101][101], box[101][101];
int dy[] = {-1, 1,  0, 0};
int dx[] = { 0, 0, -1, 1};

struct point {
    int y;
    int x;
    int boxes;
};

struct compare {
    bool operator()(const point p1, const point p2) {
        return p1.boxes> p2.boxes;
    }
};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool is_out_of_index(int x, int y) {
    return x < 1 || y < 1 || x > M || y > N;
}

void dijkstra() {
    priority_queue<point, vector<point>, compare> pq;
    box[1][1] = 0;
    pq.push({1, 1, 0});

    while (!pq.empty()) {
        int boxes_to_cur = pq.top().boxes;
        pair<int, int> cur_point = {pq.top().y, pq.top().x};

        pq.pop();

        if (boxes_to_cur > box[cur_point.fi][cur_point.se]) {
            continue;
        }

        for (int i = 0; i < 4; ++i) {
            int ny = cur_point.fi + dy[i];
            int nx = cur_point.se + dx[i];

            if (is_out_of_index(nx, ny)) {
                continue;
            }

            int next_boxes = boxes_to_cur + maze[ny][nx];

            if (next_boxes < box[ny][nx]) {
                box[ny][nx] = next_boxes;
                pq.push({ny, nx, box[ny][nx]});
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

    cin >> M >> N;

    string temp;
    for (int i = 1; i <= N; ++i) {
        cin >> temp;
        for (int j = 1; j <= M; ++j) {
            maze[i][j] = temp[j-1] - '0';
        }
    }

    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            box[i][j] = INT_MAX;
        }
    }

    dijkstra();

    cout << box[N][M] << endl;

    return 0;
}
