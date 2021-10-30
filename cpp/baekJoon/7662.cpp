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
    int T; cin >> T;
    while(T--) {
        priority_queue<int, vector<int>, greater<int>> pql;
        priority_queue<int, vector<int>, less<int>> pqg;

        int N; cin >> N;
        char c;
        int value;
        int size = 0;
        for(int i = 0; i < N; ++i) {
            cin >> c >> value;
            if(c == 'I') {
                pql.push(value);
                pqg.push(value);
                size++;
                continue;
            } 

            if(value == 1) {
                if(!size > 0) {
                    pqg.pop();
                    size--;
                }
            } else {
                if(size > 0) {
                    pql.pop();
                    size--;
                }
            }
        }

        if(size > 0)
            cout << pqg.top() << ' ' << pql.top();
        else
            cout << "EMPTY";

        cout << endl;
    }

    return 0;
}
