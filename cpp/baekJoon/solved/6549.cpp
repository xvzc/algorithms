#include <bits/stdc++.h>

#define improve_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - FUNCTIONS ----------------------------------- */
ll solution(vector<ll> &v) {
    vector<ll> s;
    ll _max = 0;

    for(int i = 0; i < v.size(); ++i) {
        while(!s.empty() && v[s.back()] > v[i]) {
            s.pop_back();
        }
        s.push_back(i);
    }

    for(int i = s.size(); i > 0; --i) {

    }

    return 0LL;
}
/* ----------------------------------------------- */

// #define SUBMIT
int main() {
    improve_io;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    while(true) {
        int n; 
        cin >> n;

        if(n == 0) 
            break;

        vector<ll> v(n); 
        for(int i = 0; i < n; ++i) 
            cin >> v[i];

        cout << solution(v) << endl;
    }

    return 0;
}

