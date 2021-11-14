#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    int n, m; cin >> n >> m;
    set<string> s1;
    set<string> s2;

    string temp;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        s1.insert(temp);
    }

    for(int i = 0; i < m; ++i) {
        cin >> temp;
        if(s1.find(temp) != s1.end())
            s2.insert(temp);
    }

    cout << s2.size() << endl;
    for(auto s : s2) {
        cout << s << endl;
    }


    return 0;
}

