#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL -------------------------------------- */
int n;
vector<string> img;
/* ----------------------------------------------- */

/* - FUNCTION ------------------------------------ */
string dfs(int x, int y, int n) {
    string answer;

    int one = 0, zero = 0;

    for(int i = y; i < y + n; ++i) {
        for(int j = x; j < x + n; ++j) {
            if(img[i][j] == '1')
                one++;
            else
                zero++;
        }
    }

    if (one == n*n) {
        return "1";
    }

    if (zero == n*n) {
        return "0";
    }

    answer += "(";
    answer += dfs(x, y, n/2);
    answer += dfs(x + n/2, y, n/2);
    answer += dfs(x, y + n/2, n/2);
    answer += dfs(x + n/2, y + n/2, n/2);
    answer += ")";

    return answer;
}
/* ----------------------------------------------- */

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    cin >> n;
    string temp;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        img.push_back(temp);
    }


    cout << dfs(0, 0, n) << endl;

    return 0;
}

