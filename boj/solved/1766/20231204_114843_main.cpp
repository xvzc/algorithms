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

    int N, K; cin >> N >> K;
    vector<vector<int>> v(N + 1);
    vector<int> indeg(N + 1);

    for (int i = 1; i <= K; ++i) {
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        indeg[y]++;
    }

    priority_queue<int> pq;
    for (int i = 1; i <= N; ++i) {
        if (indeg[i] == 0) {
            pq.push(-i);
        }
    }

    vector<int> answer;

    while(!pq.empty()) {
        int cur = -pq.top();
        pq.pop();

        for (auto next : v[cur]) {
            indeg[next]--;
            if (indeg[next] == 0) {
                pq.push(-next);
            }
        }

        answer.push_back(cur);
    }


    for (auto i : answer) {
        cout << i << ' ';
    } cout << endl;


    return 0;
}
