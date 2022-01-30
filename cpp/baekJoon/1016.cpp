#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second
#define MAX 1010000

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
bool isPrime[MAX];
ll mini, maxi;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);


    memset(isPrime, true, sizeof(isPrime));

    for (int i = 2; i*i <= MAX; ++i) {
        if (!isPrime[i]) {
            continue;
        }

        for (int j = i+i; j <= MAX; j+=i) {
            isPrime[j] = false;
        }
    }

    cin >> mini >> maxi;

    vector<ll> noSquare(maxi - mini + 1, true);

    for (int i = 2; i <= maxi; ++i) {
        if (!isPrime[i])
            continue;

        ll square = i*i;
        for (ll j = mini + (mini % square); j <= maxi; j+=square) {
            noSquare[j - mini] = false;
        }
    }

    int answer = 0;
    for (auto b : noSquare) {
        if (b)
            answer++;
    }

    cout << answer << endl;

    return 0;
}

