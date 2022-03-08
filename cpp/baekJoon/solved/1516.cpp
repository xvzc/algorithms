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
vector<int> v[501];
int times[501];
int indeg[501];
int total[501];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N; cin >> N;

    int temp;
    for (int i = 1; i <= N; ++i) {
        cin >> times[i];
        while (true) {
            cin >> temp;
            if (temp == -1) {
                break;
            }

            v[temp].push_back(i);
            indeg[i]++;
        }
    }

    queue<int> q;

    for (int i = 1; i <= N; ++i) {
        if (indeg[i] == 0) {
            q.push(i);
            total[i] = times[i];
        }
    }

    vector<int> order;
    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto next : v[front]) {
            if (total[next] < total[front] + times[next]) {
                total[next] = total[front] + times[next];
            }

            if (--indeg[next] == 0) {
                q.push(next);
            }
        }

        order.push_back(front);
    }

    for (int i = 1; i <= order.size(); ++i) {
        cout << total[i] << endl;
    } cout << endl;

    return 0;
}
