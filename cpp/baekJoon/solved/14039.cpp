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

    vector<vector<int>> v(4);
    int temp;
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> temp;
            v[i].push_back(temp);
        }
    }

    for(auto vi : v) {
        for(auto i : vi) {
            debug << i << ' ';
        } debug << endl;
    }

    int sum = v[0][0] + v[0][1] + v[0][2] + v[0][3];
    bool test = true;

    for(int i = 0; i < 4; ++i) {
        int col = 0, row = 0;
        for(int j = 0; j < 4; ++j) {
            col += v[i][j];
            row += v[j][i];
        }
        if( col != sum || row != sum ) {
            test = false;
            break;
        }
    }

    if(test)
        cout << "magic" << endl;
    else
        cout << "not magic" << endl;


    return 0;
}

