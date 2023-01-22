#include <bits/stdc++.h>

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
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    priority_queue<int, vector<int>, greater<int>> pq;

    int x, n; cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> x;
        if(x)
            pq.push(x);

        if(!x) {

            if(pq.empty()) {
                cout << 0 << endl;
                continue;
            }

            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}

