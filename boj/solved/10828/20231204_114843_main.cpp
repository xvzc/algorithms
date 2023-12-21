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

    int n;
    string op, val;
    stack<int> st;

    cin >> n;
    while(n--) {
        cin >> op;
        if(op[1] == 'u') {
            cin >> val;
            st.push(stoi(val));
        } else if(op[0] == 'p') {
            int top;
            if(st.empty()) {
                top = -1;
            } else {
                top = st.top();
                st.pop();
            }
            cout << top << endl;
        } else if(op[0] == 's') {
            cout << st.size() << endl;
        } else if(op[0] == 'e') {
            cout << (st.empty() ? 1 : 0) << endl;
        } else if (op[0] == 't') {
            cout << (st.empty() ? -1 : st.top()) << endl;
        }
    } 

    return 0;
}

