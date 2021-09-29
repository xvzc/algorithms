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
    vector<string> v;

    int n; cin >> n;
    string check, cur;

    cin >> check; 
    n--;

    while(n--) {
        cin >> cur;

        for(int i = 0; i < check.size(); ++i) {
            if(check[i] == '?')
                continue;

            if(check[i] != cur[i])
                check[i] = '?';
        }
    }
    cout << check;
}

