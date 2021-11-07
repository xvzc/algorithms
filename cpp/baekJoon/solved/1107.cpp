#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif

    int target; cin >> target;
    int n; cin >> n;

    char c;
    string disabled;
    for(int i = 0; i < n; ++i) {
        cin >> c; disabled.push_back(c);
    }

    int answer = abs(target - 100);
    for(int i = 0; i < 1000000; ++i) {
        bool is_possible = true;

        for(int j = 0; j < disabled.size(); ++j) {
            if(to_string(i).find(disabled[j]) != string::npos) {
                is_possible = false;
                break;
            }
        }

        if(!is_possible)
            continue;

        answer = min(answer, abs(i - target) + (int)to_string(i).size());
    }

    cout << answer << endl;

    return 0;
}

