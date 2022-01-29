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
int board[101];
int d[101];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> M;

    int from, to;
    for (int i = 0; i < N + M; ++i) {
        cin >> from >> to;
        board[from] = to;
    }

    queue<int> q;

    for (int i = 0; i <= 100; ++i) {
        d[i] = -1;
    }

    q.push(1);
    d[1] = 0;

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (int i = 1; i <= 6; ++i) {
            int next = front + i;

            if (next > 100)
                continue;

            if (board[next] != 0) {
                next = board[next];
            }

            if (d[next] != -1)
                continue;

            q.push(next);
            d[next] = d[front] + 1;
        }

    }

    cout << d[100] << endl;

    return 0;
}

