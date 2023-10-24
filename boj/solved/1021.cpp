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
int solution(deque<int> &dq, vector<int> &v) {
    int answer = 0;

    for(int i = 0; i < v.size(); ++i) {
        int cnt = 0;
        while(dq.front() != v[i]) {
            int temp = dq.front();
            dq.pop_front();
            dq.push_back(temp);
            cnt++;
        }
        answer += cnt < dq.size() - cnt ? cnt : dq.size() - cnt;
        dq.pop_front();
    }

    return answer;
}
// *********************************

#define SUBMIT
int main() {
    io_faster;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    int N, M;
    deque<int> dq;
    vector<int> v;
    cin >> N >> M;

    int temp;
    while(M--) {
        cin >> temp;
        v.push_back(temp);
    }

    for(int i = 1; i <= N; ++i) dq.push_back(i);

	cout << solution(dq, v);

    return 0;
}
