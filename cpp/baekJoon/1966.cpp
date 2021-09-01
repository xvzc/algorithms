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
int solution(queue<pair<int, int>> &q, vector<int> v, int query) {
    int answer = 0;
    sort(v.begin(), v.end());
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        if(cur.se == v.back()) {
            v.pop_back();
            answer++;

            if(cur.fi == query)
                return answer;

        } else {
            q.push(cur);
        }
    }
    return answer;
}
// *********************************

// #define SUBMIT
int main() {
    io_faster;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    int T, N, query;
    cin >> T;
    while(T--) {
        cin >> N >> query;
        queue<pair<int, int>> q;
        vector<int> v;

        int temp;
        for(int i = 0; i < N; ++i) {
            cin >> temp;
            q.push({i, temp});
            v.push_back(temp);
        }

        cout << solution(q, v, query) << endl;
    } 


    return 0;
}

