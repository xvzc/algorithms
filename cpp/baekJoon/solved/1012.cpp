#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int T, N, M, K;
bool yard[51][51];
bool visited[51][51];

int dy[] = { 0, -1, 1, 0};
int dx[] = { -1, 0, 0, 1};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void dfs(int x, int y) {
    visited[x][y] = true;

    for(int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= M || ny >= N)
            continue;

        if(visited[nx][ny])
            continue;

        if(!yard[nx][ny])
            continue;

        dfs(nx, ny);
    }

    return;
}
int solution() {
    int cnt = 0;
    for(int i = 0; i < M; ++i) {
        for(int j = 0; j < N; ++j) {
            if(visited[i][j])
                continue;

            if(yard[i][j] == 0)
                continue;

            dfs(i, j);
            cnt++;
        }
    }
    return cnt;
}
/* ----------------------------------------------- */

// #define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    cin >> T;
    while(T--) {
        cin >> M >> N >> K;
        int x, y;

        while(K--) {
            cin >> x >> y;
            yard[x][y] = true;
        }

        cout << solution() << endl;

        memset(yard, 0, sizeof(yard));
        memset(visited, 0, sizeof(visited));
    }

    return 0;
}

