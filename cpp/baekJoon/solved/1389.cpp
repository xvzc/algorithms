#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

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

    vector<set<int>> v(n+1);

    int x, y;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        v[x].insert(y);
        v[y].insert(x);
    }

    pair<int, int> answer = {INT_MAX, INT_MAX};
    for(int i = 1; i < v.size(); ++i) {
        vector<bool> visited(n+1, false);

        queue<pair<int, int>> q;

        int kevin_bacon = 0;

        q.push({i, 0});
        visited[i] = true;
        kevin_bacon += q.front().se;

        while(!q.empty()) {
            for(auto n : v[q.front().fi]) {
                if(!visited[n]) {
                    q.push({n, q.front().se + 1});
                    visited[n] = true;
                }
            }

            kevin_bacon += q.front().se;
            q.pop();
        }

        if(answer.se > kevin_bacon)
            answer = {i, kevin_bacon};
    }

    cout << answer.fi << endl;;

    return 0;
}
