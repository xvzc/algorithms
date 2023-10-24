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
int dx[4] = { 0, -1, 1, 0};
int dy[4] = {-1,  0, 0, 1};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool is_out_of_index(int i, int j) {
    if(i < 0 || N <= i)
        return true;

    if(j < 0 || M <= j)
        return true;

    return false;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> M >> N;

    queue<pair<int, int>> q;
    vector<vector<int>> box(N, vector<int>(M, 0));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            cin >> box[i][j];
            if(box[i][j] == 1)
                q.push({i, j});
        }
    }

    while(!q.empty()) {
        int y = q.front().fi;
        int x = q.front().se;

        for(int i = 0; i < 4; ++i) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(is_out_of_index(ny, nx))
                continue;

            if(box[ny][nx] != 0)
                continue;

            q.push({ny, nx});
            box[ny][nx] = box[y][x] + 1;
        }

        q.pop();
    }

    int result = -1e9;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(box[i][j] == 0) {
                cout << -1 << endl;
                return 0;
            }

            result = max(box[i][j], result);
        }
    }

    cout << result - 1 << endl;

    return 0;
}

