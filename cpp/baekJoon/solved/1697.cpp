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

// #define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    int n, k; cin >> n >> k;

    queue<pair<int, int>> q;
    vector<bool> visited(100001, false);

    q.push({n, 0});
    visited[n] = true;

    int answer = 0;
    while(!q.empty()) {
        if(q.front().fi == k) {
            answer = q.front().se;
            break;
        }

        if(q.front().fi - 1 >= 0) {
            if(!visited[q.front().fi - 1]) {
                q.push({q.front().fi - 1, q.front().se + 1});
                visited[q.front().fi] = true;
            }
        }

        if(q.front().fi + 1 <= 100000) {
            if(!visited[q.front().fi + 1]) {
                q.push({q.front().fi + 1, q.front().se + 1});
                visited[q.front().fi] = true;
            }
        }

        if(q.front().fi * 2 <= 100000) {
            if(!visited[q.front().fi * 2]) {
                q.push({q.front().fi * 2, q.front().se + 1});
                visited[q.front().fi] = true;
            }
        }

        q.pop();
    }

    cout << answer << endl;

    return 0;
}

