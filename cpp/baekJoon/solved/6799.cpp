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
bool compare(pair<string, ll> p1, pair<string, ll> p2) {
    if(p1.se == p2.se)
        return p1.fi < p2.fi;
    else
        return p1.se > p2.se;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    vector<pair<string, ll>> v;
    string name;
    ll n, r, s, d; cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> name >> r >> s >> d;
        v.push_back(make_pair(name, 2*r + 3*s + d));
    }

    sort(v.begin(), v.end(), compare);

    int m = v.size() > 2 ? 2 : v.size();

    for(int i = 0; i < m; ++i) {
        cout << v[i].fi << endl;
    }

    return 0;
}

