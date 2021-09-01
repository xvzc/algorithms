#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// GLOBAL VARIABLES ****************
// *********************************

// FUNCTIONS ***********************
// *********************************

#define SUBMIT
int main() {
    io_faster;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int k, n, sum = 0;
    stack<int> stk;

    cin >> k;
    while(k--) {
        cin >> n;
        if(n == 0 && !stk.empty())
            stk.pop();
        else 
            stk.push(n);
    }

    while(!stk.empty()) {
        sum += stk.top();
        stk.pop();
    }

    cout << sum << endl;

    return 0;
}

