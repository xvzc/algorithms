#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int lan[10000];

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif

    int K, N; cin >> K >> N;

    int max_ = 0; 
    for(int i = 0; i < K; ++i) {
        cin >> lan[i];

        if(lan[i] > max_)
            max_ = lan[i];
    }

    ll lo = 1, hi = max_, mid;
    ll max_len = 0;

    while(lo <= hi) {
        mid = (lo + hi) / 2;

        int num_of_lan = 0;
        for(int i = 0; i < K; ++i)
            num_of_lan += lan[i] / mid;

        if(num_of_lan >= N) {
            lo = mid + 1;
            max_len = mid;
        } else
            hi = mid - 1;
    }

    cout << max_len;

    return 0;
}

