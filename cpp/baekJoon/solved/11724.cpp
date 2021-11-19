#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, M; cin >> N >> M;
    vector<vector<int>> graph(N+1);
    vector<bool> visited(N+1, false);

    int a, b;
    for(int i = 0; i < M; ++i) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int answer = 0;
    for(int i = 1; i <= N; ++i) {
        if(visited[i])
            continue;

        queue<int> q;

        q.push(i);
        visited[i] = true;

        while(!q.empty()) {
            for(int i = 0; i < graph[q.front()].size(); ++i) {
                if(visited[graph[q.front()][i]])
                    continue;

                q.push(graph[q.front()][i]);
                visited[graph[q.front()][i]] = true;
            }

            q.pop();
        }

        answer++;
    }

    cout << answer << endl;

    return 0;
}

