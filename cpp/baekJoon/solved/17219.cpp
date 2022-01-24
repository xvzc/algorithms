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
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> M;
    unordered_map<string, string> umap;

    string id, pw;
    for (int i = 0; i < N; ++i) {
        cin >> id >> pw;
        umap[id] = pw;
    }

    for (int i = 0; i < M; ++i) {
        cin >> id;
        cout << umap[id] << endl;;
    }

    return 0;
}

