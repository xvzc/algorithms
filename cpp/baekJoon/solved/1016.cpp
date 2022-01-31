#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second
#define MAX 1001005

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
vector<ll> squares;
ll mini, maxi;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int count() {
    vector<bool> is_no_square(maxi - mini + 1, true);

    for (int i = 0; i < squares.size(); ++i) {
        ll start = mini + squares[i] - (mini % squares[i]);

        if (mini % squares[i] == 0)
            start = mini;

        for (ll j = start; j <= maxi; j+=squares[i]) {
            is_no_square[j - mini] = false;
        }
    }

    int answer = 0;
    for (int i = 0; i < is_no_square.size(); ++i) {
        if (is_no_square[i])
            answer++;
    }

    return answer;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);


    memset(isPrime, true, sizeof(isPrime));

    cin >> mini >> maxi;

    for (int i = 2; i < MAX; ++i) {
        if (!isPrime[i]) {
            continue;
        }

        for (int j = i+i; j <= MAX; j+=i) {
            isPrime[j] = false;
        }
    }

    for (int i = 2; i < MAX; ++i) {
        if (isPrime[i]) {
            squares.push_back((ll)i*i);
        }
    }

    cout << count() << endl;
    // cout << "waef" << endl;

    return 0;
}

