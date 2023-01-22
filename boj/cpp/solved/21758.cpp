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
int honey[100001];
int sum[100001];
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N; cin >> N;

    for (int i = 1; i <= N; ++i) {
        cin >> honey[i];
    }

    for (int i = 1; i <= N; ++i) {
        sum[i] = sum[i-1] + honey[i];
    }

    int answer = INT_MIN;
    for (int i = 2; i <= N - 1; ++i) {
        answer = max(answer, sum[i] - 2*honey[i] + sum[N] - honey[N]);
        answer = max(answer, sum[N] - honey[1] - honey[N] + honey[i]);
        answer = max(answer, sum[N] - sum[1] + sum[N] - sum[i - 1] - 2*honey[i]);
    }

    cout << answer << endl;

    return 0;
}

