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
    int N, M; cin >> N >> M;

    int _max;
    vector<int> v(N); 
    for(int i = 0; i < N; ++i) {
        cin >> v[i];
        _max = _max < v[i] ? v[i] : _max;
    }

    int ans = 0;
    int left = 0, right = _max, mid;
    while(left <= right) {
        mid = (left + right) / 2;

        ll sum = 0;
        for(int i = 0; i < N; ++i)
            sum += max(v[i] - mid, 0);

        if(sum >= M)
            ans = mid;

        if(sum < M)
            right = mid - 1;
        else
            left = mid + 1;
    }

    cout << ans;

    return 0;
}

