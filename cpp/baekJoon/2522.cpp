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

    int N; cin >> N;
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < N-i; ++j) {
            cout << ' ';
        }

        for (int j = 0; j < i; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    for (int i = 0; i < N; ++i) {
        cout << '*';
    }
    cout << endl;

    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << ' ';
        }

        for (int j = 0; j < N-i; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}

