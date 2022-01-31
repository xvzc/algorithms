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
int N, mini = INT_MAX, temp;
vector<int> v;

/* ----------------------------------------------- */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 1; i < v.size(); ++i) {
        mini = min(mini, abs(v[i] - v[i-1]));
    }

    cout << mini << endl;

    return 0;
}

