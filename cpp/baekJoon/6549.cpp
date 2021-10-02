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
vector<int> tokenize(string str, char delimeter) {
    vector<int> tokens;
    stringstream ss(str);

    string token;
    while (getline(ss, token, delimeter)) 
        tokens.push_back(stoi(token));

    return tokens;
}

ll solution(vector<int> &v) {
    ll answer = 0;

    return answer;
}
/* ----------------------------------------------- */

// #define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    while(1) {
        string str;
        getline(cin, str);

        if(str.size() == 1 && str[0] == '0')
            break;

        vector<int> v = tokenize(str, ' ');

        cout << solution(v) << endl;
    }

    return 0;
}

