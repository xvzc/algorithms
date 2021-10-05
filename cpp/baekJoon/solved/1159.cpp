#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    vector<int> v(26, 0);

    int n; cin >> n;

    string s;
    while(n--) {
        cin >> s;
        v[ s[0] - 97 ]++;
    }

    int cnt = 0;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] >= 5) {
            cout << char(i + 97);
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "PREDAJA" << endl;

    return 0;
}

