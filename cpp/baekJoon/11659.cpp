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

    vector<int> v(N+1);
    v[0] = 0;
    for (int i = 1; i <= N; ++i) {
        cin >> v[i];
    }

    for (int i = 1; i <= N; ++i) {
        v[i] += v[i-1];
    }

    int from, to;
    for (int i = 0; i < M; ++i) {
        cin >> from >> to;
        cout << v[to] - v[from-1] << endl;
    }


    return 0;
}

