#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

int dx[8] = {-1, -1, -1, 0,  0, 1, 1,  1 };
int dy[8] = { 1 , 0, -1, 1, -1, 1, 0, -1 };

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

int direction(string s) {
    if(s == "LT") 
        return 0;

    if(s == "L") 
        return 1;

    if(s == "LB") 
        return 2;

    if(s == "T") 
        return 3;

    if(s == "B") 
        return 4;

    if(s == "RT") 
        return 5;

    if(s == "R") 
        return 6;

    if(s == "RB") 
        return 7;

    return -2e9;
}

/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    string temp;
    cin >> temp; pair<int, int> king  = make_pair(temp[0] - 65, temp[1] - 49);
    cin >> temp; pair<int, int> stone = make_pair(temp[0] - 65, temp[1] - 49);

    int n; cin >> n;

    // cout << king.fi << king.se << endl;
    // cout << stone.fi << stone.se << endl;

    while(n--) {
        cin >> temp;
        // cout << direction(temp) << endl;
        int dir = direction(temp);

        int kx = king.fi + dx[dir];
        int ky = king.se + dy[dir];

        if(kx > 7 || kx < 0 || ky > 7 || ky < 0)
            continue;

        int sx = stone.fi;
        int sy = stone.se;
        if(kx == stone.fi && ky == stone.se) {
            sx += dx[dir];
            sy += dy[dir];

            if(sx > 7 || sx < 0 || sy > 7 || sy < 0)
                continue;
        }

        king.fi = kx;
        king.se = ky;
        stone.fi = sx;
        stone.se = sy;

    }

    cout << char(king.fi + 'A') << king.se + 1 << endl;
    cout << char(stone.fi + 'A') << stone.se + 1;

    return 0;
}

