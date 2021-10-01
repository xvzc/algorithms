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

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    unordered_map<string, int> value;
    unordered_map<string, int> weight;

    value["black"]   = 0;
    value["brown"]   = 1;
    value["red"]     = 2;
    value["orange"]  = 3;
    value["yellow"]  = 4;
    value["green"]   = 5;
    value["blue"]    = 6;
    value["violet"]  = 7;
    value["grey"]    = 8;
    value["white"]   = 9;

    weight["black"]  = 1;
    weight["brown"]  = 10;
    weight["red"]    = 100;
    weight["orange"] = 1000;
    weight["yellow"] = 10000;
    weight["green"]  = 100000;
    weight["blue"]   = 1000000;
    weight["violet"] = 10000000;
    weight["grey"]   = 100000000;
    weight["white"]  = 1000000000;

    ll answer = 0;
    string temp;
    cin >> temp;
    answer += 10*value[temp];

    cin >> temp;
    answer += value[temp];

    cin >> temp;
    answer *= weight[temp];

    cout << answer;

    return 0;
}

