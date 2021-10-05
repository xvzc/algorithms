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
    int N, m, M, T, R; cin >> N >> m >> M >> T >> R;

    int cur = m;
    int lo_limit = m;
    int hi_limit = M;

    if(m + T > M) {
        cout << -1 << endl;
        return 0;
    }

    int cnt = 0;
    while(N) {
        if(cur + T <= hi_limit) {
            N--;
            cur += T;
        } else {
            if(cur - R  < lo_limit){
                cur = m;
            } else {
                cur -= R;
            }
        }

        cnt++;
    }
    cout << cnt;

    return 0;
}

