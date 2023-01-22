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

int N, M; 
int dx[4] = {-1,  0, 0, 1};
int dy[4] = { 0, -1, 1, 0};

bool is_out_of_index(int y, int x) {
    return y < 0 || N <= y || x < 0 || M <= x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> M;
    vector<vector<int>> maze(N);

    string temp;
    for(int i = 0; i < N; ++i) {
        cin >> temp;
        for(auto x : temp) {
            maze[i].push_back(x - '0');
        }
    }

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));

    while(!q.empty()) {
        int y = q.front().fi;
        int x = q.front().se;

        for(int i = 0; i < 4; ++i) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(is_out_of_index(ny, nx))
                continue;

            if(maze[ny][nx] > 1)
                continue;

            if(maze[ny][nx] == 0)
                continue;

            q.push(make_pair(ny, nx));
            maze[ny][nx] = maze[y][x] + 1;
        }

        q.pop();
    }

    cout << maze[N-1][M-1];

    return 0;
}

