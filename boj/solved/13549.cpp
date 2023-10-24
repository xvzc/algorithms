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
int N, K, sec[100001];
const int INF = 987654321;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
bool is_out_of_index(int x) {
    return x < 0 || x > 100000;
}
void dijkstra(int from) {
    priority_queue<pair<int, int>> pq;

    sec[from] = 0;
    pq.push({sec[from], from});

    while (!pq.empty()) {
        int sec_to_cur = -pq.top().fi;
        int cur_idx = pq.top().se;

        pq.pop();

        if (sec[cur_idx] < sec_to_cur) {
            continue;
        }

        vector<int> v = {cur_idx - 1, cur_idx + 1, cur_idx*2};
        for (int i = 0; i < 3; ++i) {
            int nx = v[i];
            int next_sec = sec_to_cur + (i == 2 ? 0 : 1);

            if (is_out_of_index(nx)) {
                continue;
            }

            if (next_sec < sec[nx]) {
                sec[nx] = next_sec;
                pq.push({-next_sec, nx});
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

    cin >> N >> K;
    for (int i = 0; i < 100001; ++i) {
        sec[i] = INF;
    }

    dijkstra(N);

    cout << sec[K] << endl;

    return 0;
}

