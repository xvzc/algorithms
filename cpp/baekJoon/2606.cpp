#include <bits/stdc++.h>

#define SUBMIT
#define debug if constexpr (!submit) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef SUBMIT
constexpr bool submit = true;
#else
constexpr bool submit = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
bool visited[101] = {false, };
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (!submit) {
        (void)!freopen("input.txt", "r", stdin);
        cout << "# From the test case" << endl;
    }

    int n, m; cin >> n >> m;
    vector<vector<int>> v(n+1);

    int x, y;
    for(int i = 0; i < m; ++i) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    queue<int> q;
    int answer = 0;

    q.push(1);
    visited[1] = true;

    while(!q.empty()) {

        for(int i = 0; i < v[q.front()].size(); ++i) {
            if(visited[v[q.front()][i]])
                continue;

            q.push(v[q.front()][i]);
            visited[v[q.front()][i]] = true;
            answer++;
        }

        debug << q.front() << endl;
        q.pop();
    }

    cout << answer << endl;

    return 0;
}
