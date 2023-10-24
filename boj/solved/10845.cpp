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
    int n; cin >> n;

    queue<int> q;

    string op; 
    int value;
    while(n--) {
        cin >> op;
        if(op == "push") {
            cin >> value;
            q.push(value);
            continue;
        }

        if(op == "pop") {
            if(q.empty()) {
                cout << -1 << endl;
                continue;
            } 

            cout << q.front() << endl;
            q.pop();
            continue;
        }

        if(op == "size") {
            cout << q.size() << endl;
            continue;
        }

        if(op == "empty") {
            cout << q.empty() << endl;
            continue;
        }
        
        if(op == "front") {
            cout << (q.empty() ? -1 : q.front()) << endl;
            continue;
        }

        if(op == "back") {
            cout << (q.empty() ? -1 : q.back()) << endl;
            continue;
        }

    }

    return 0;
}

