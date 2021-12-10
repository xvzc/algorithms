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

/* - GLOBAL VARIABLES ---------------------------- */
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int do_D(int n) {
    return (n * 2) % 10000;
}

int do_S(int n) {
    return (n + 9999) % 10000;
}

int do_L(int n) {
    return (n % 1000) * 10 + (n / 1000);
}

int do_R(int n) {
    return (n % 10) * 1000 + (n / 10);
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);


    int T; cin >> T;
    while(T--) {
        int a, b; cin >> a >> b;

        queue<pair<int, string>> q;
        q.push({a, ""});
        bool visited[10000] = {0, };
        visited[a] = true;

        while(!q.empty()) {
            if(q.front().fi == b) {
                cout << q.front().se << endl;
                break;
            }

            int d = do_D(q.front().fi);
            int s = do_S(q.front().fi);
            int l = do_L(q.front().fi);
            int r = do_R(q.front().fi);

            if(!visited[d]) {
                q.push({d, q.front().se + "D"});
                visited[d] = true;
            }

            if(!visited[s]) {;
                q.push({s, q.front().se + "S"});
                visited[s] = true;
            }

            if(!visited[l]) {
                q.push({l, q.front().se + "L"});
                visited[l] = true;
            }

            if(!visited[r]) {
                q.push({r, q.front().se + "R"});
                visited[r] = true;
            }

            q.pop();
        }

    }


    return 0;
}

