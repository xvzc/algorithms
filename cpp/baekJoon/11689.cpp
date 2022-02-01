#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second
#define MAX 1000001

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
ll N;
bool is_prime[MAX];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
void trace(bool arr[]) {
    for (int i = 0; i < 100; i++) {
        if (arr[i]) {
            cout << i << ' ';
        } 
    }cout << endl;
}

ll exponent(int p, int a) {
    ll ret = 1;

    for (int i = 0; i < a; ++i) {
        ret *= p;
    }

    return ret;
}

ll totient(ll p, ll a) {
    return exponent(p, a-1)*(p - 1);
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N;

    memset(is_prime, true, sizeof(is_prime));

    is_prime[0] = false;
    is_prime[1] = false;

    for (ll i = 2; i*i < MAX; ++i) {
        if (!is_prime[i]) {
            continue;
        }

        for (ll j = i*i; j < MAX; j+=i) {
            is_prime[j] = false;
        }
    }

    if (2 <= N && N < MAX && is_prime[N]) {
        cout << N - 1 << endl;
        return 0;
    }

    ll answer = 1;

    for (ll i = 2; i*i <= N; ++i) {
        if (!is_prime[i]) {
            continue;
        }

        ll prime = i;
        ll n = 0;
        while (N % prime == 0) {
            n++;
            N /= prime;
        }

        if (n == 1) {
            answer *= prime - 1;
        } else if (n > 1) {
            answer *= totient(prime, n);
        }
    }

    if (N > 1) {
        answer *= N-1;
    }

    cout << answer << endl;

    return 0;
}
