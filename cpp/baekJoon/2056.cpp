#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second
#define all(x) x.begin(),x.end()

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int N;
int indeg[10001];
int times[10001];
vector<int> jobs[10001];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> times[i];
        int num; cin >> num;
        for (int j = 0; j < num; ++j) {
            int x; cin >> x;
            jobs[x].push_back(i);
            indeg[i]++;
        }
    }
    vector<int> total(N + 1);

    queue<int> q;
    for (int i = 1; i <= N ; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
            total[i] = times[i];
        }
    }

    while(!q.empty()) {
        int cur = q.front(); q.pop();

        for (auto next : jobs[cur]) {
            if (--indeg[next] == 0) {
                q.push(next);
            }

            total[next] = max(total[next], total[cur] + times[next]);
        }
    }

    cout << *max_element(all(total));

    return 0;
}
