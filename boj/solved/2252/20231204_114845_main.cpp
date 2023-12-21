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
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, M; cin >> N >> M;

    vector<int> in_degrees(N + 1);
    vector<vector<int>> v(N + 1);

    for (int i = 1; i <= M; ++i) {
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        in_degrees[y]++;
    }

    queue<int> q;

    for (int i = 1; i <= N; ++i) {
        if (in_degrees[i] == 0) {
            q.push(i);
        }
    }

    vector<int> answer;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (auto next : v[cur]) {
            in_degrees[next]--;
            if (in_degrees[next] == 0) {
                q.push(next);
            }
        }

        answer.push_back(cur);
    }

    for (auto i : answer) {
        cout << i << ' ';
    }

    return 0;
}
