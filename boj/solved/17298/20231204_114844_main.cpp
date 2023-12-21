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
    int N, temp;
    cin >> N;

    stack<int> st;
    vector<int> v(N);
    vector<int> ans(N, -1);

    for(int i = 0; i < N; ++i) cin >> v[i];

    for(int i = 0; i < N; ++i) {
        while(!st.empty() && v[st.top()] < v[i]) {
            ans[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }

    for(auto i : ans) cout << i << ' ';

    return 0;
}

