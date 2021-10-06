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

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */
string to_binary(char c) {
    int num = c - 48;
    string ret = "";
    for(int i = 0; i < 3; ++i) {
        if(num % 2)
            ret += '1';
        else
            ret += '0';

        num /= 2;
    }

    reverse(ret.begin(), ret.end());

    return ret;
}

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    string s; cin >> s;
    string ans;

    if(s[0] == '0') {
        cout << 0 << endl;
        return 0;
    }

    string first = to_binary(s[0]);
    cout << first.substr(first.find('1'));

    for(int i = 1; i < s.size(); ++i) {
        cout << to_binary(s[i]);
    }

    return 0;
}

