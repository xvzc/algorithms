#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

bool is_number(string s) {
    for(auto c : s) {
        if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
            return false;
    }
    return true;
}

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    unordered_map<int, string> map_is;
    unordered_map<string, int> map_si;
    int n, m; cin >> n >> m;

    string temp;
    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        map_is[i] = temp;
        map_si[temp] = i;
    }

    for(int i = 0; i < m; ++i) {
        cin >> temp;
        if(is_number(temp))
            cout << map_is[stoi(temp)] << endl;
        else
            cout << map_si[temp] << endl;
    }

    return 0;
}

