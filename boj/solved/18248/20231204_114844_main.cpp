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
bool compare(vector<int> v1, vector<int> v2) {
    return v1[0] > v2[0];
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> v;

    v.push_back(vector<int>(m + 1, 1));
    v[0][0] = 0;

    for (int i = 0; i < n; ++i) {

        vector<int> temp(m + 1, 0);
        for (int j = 1; j <= m; ++j) {
            cin >> temp[j];
            if (temp[j]) {
                temp[0]++;
            }
        }

        v.push_back(temp);
    }

    sort(v.begin() + 1, v.end(), compare);
    for (int i = 1; i < v[0].size(); ++i) {
        for (int j = 1; j < v.size() ; ++j) {
            if (v[j - 1][i] == 0 && v[j][i] == 1) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}
