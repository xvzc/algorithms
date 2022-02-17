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
struct cell {
    int row;
    int col;
};

string alphabet = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
cell parse(string s) {
    cell c;

    string temp;

    int i;
    for (i = 1; s[i] != 'C'; ++i) {
        temp.push_back(s[i]);
    }

    c.row = stoi(temp);
    temp.clear();

    ++i;

    for (; i < s.length(); ++i) {
        temp.push_back(s[i]);
    }

    c.col = stoi(temp);

    return c;
}

string solve(cell c) {
    string ret;

    int q = c.col;
    int r;

    while (q) {
        r = q % 26;
        q = q / 26;

        if (r == 0) {
            q--;
        }

        ret.push_back(alphabet[r]);
    }

    reverse(ret.begin(), ret.end());

    return ret + to_string(c.row);
}

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    string temp;
    while (true) {
        cin >> temp;
        if (temp == "R0C0")
            break;

        cell c = parse(temp);
        cout << solve(c) << endl;
    }

    return 0;
}

