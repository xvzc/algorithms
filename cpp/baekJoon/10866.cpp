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
void solution() {}
// *********************************

#define SUBMIT
int main() {
    io_faster;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    deque<int> dq;
    int N, x;
    string s;
    cin >> N;
    while(N--) {
        cin >> s;
        if (s[1] == 'u') { // push_
            cin >> x;
            if (s[5] == 'b'){ // back
                dq.push_back(x);
            } else if (s[5] == 'f') { // front
                dq.push_front(x);
            }
        } else if (s[1] == 'o') { // pop_
            int temp;
            if (s[4] == 'b'){ // back
                if (dq.empty()) {
                    temp = -1;
                } else {
                    temp = dq.back();
                    dq.pop_back();
                }
            } else if (s[4] == 'f') { // front
                if (dq.empty()) {
                    temp = -1;
                } else {
                    temp = dq.front();
                    dq.pop_front();
                }
            }
            cout << temp << endl;
        } else if (s[0] == 'f') {
            if (dq.empty()) {
                cout << -1 << endl;
            } else {
                cout << dq.front() << endl;
            }
        } else if (s[0] == 'b') {
            if (dq.empty()) {
                cout << -1 << endl;
            } else {
                cout << dq.back() << endl;
            }
        } else if (s[0] == 's') {
            cout << dq.size() << endl;
        } else if (s[0] == 'e') {
            cout << dq.empty()  << endl;
        }
    } 

	solution();

    return 0;
}

