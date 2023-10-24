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
int n; 
int dx[4] = {-1,  0, 0, 1};
int dy[4] = { 0, -1, 1, 0};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool is_out_of_index(int y, int x) {
    return y < 0 || y >= n || x < 0 || x >= n;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> n;
    vector<vector<int>> v(n);
    vector<int> answer;

    string temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;

        for (int j = 0; j < n; ++j)
            v[i].push_back(temp[j] - '0');
    }

    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(v[i][j] == 0)
                continue;

            int cnt = 0;

            q.push({i, j});
            v[i][j] = 0;
            cnt++;

            while (!q.empty()) {
                int y = q.front().fi;
                int x = q.front().se;

                for (int k = 0; k < 4; ++k) {
                    int ny = y + dy[k];
                    int nx = x + dx[k];

                    if (is_out_of_index(ny, nx))
                        continue;

                    if(v[ny][nx] == 0)
                        continue;

                    q.push({ny, nx});
                    v[ny][nx] = 0;
                    cnt++;
                }
                q.pop();
            }
            answer.push_back(cnt);
        }
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << endl;
    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i] << endl;
    }

    return 0;
}

