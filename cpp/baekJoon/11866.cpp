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
    int n, k;
    cin >> n >> k;

    deque<int> dq;
    for(int i=1; i <= n; i++) {
        dq.push_back(i);
    }

    vector<int> answer;
    while (!dq.empty()) {
        int temp;
        for(int i=1; i < k; i++) {
            temp = dq.front();
            dq.pop_front();
            dq.push_back(temp);
        }
        temp = dq.front();
        dq.pop_front();
        answer.push_back(temp);
    }

    string s;
    s += "<";
    for(auto i : answer) {
        s += to_string(i) + ", ";
    }
    s.pop_back();
    s.pop_back();

    s += ">";
    cout << s << endl;

	solution();

    return 0;
}

