#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

vector<ll> segment_tree;
int x;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

void update(int idx, ll value) {
    idx += x-1;
    segment_tree[idx] = value;

    idx/=2;
    while(idx > 0) {
        segment_tree[idx] = segment_tree[idx*2] + segment_tree[idx*2 + 1];
        idx/=2;
    }
}

ll query(int left, int right) {
    left+=x-1;
    right+=x-1;

    ll sum = 0;

    while(left <= right) {
        if(left%2 == 1) {
            sum+=segment_tree[left];
        }

        if(right%2 == 0) {
            sum+=segment_tree[right];
        }

        right = (right-1)/2;
        left = (left+1)/2;
    }

    return sum;
}
/* ----------------------------------------------- */

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif

    int N, M, K; cin >> N >> M >> K;
    segment_tree = vector<ll>(4 * N, 0);

    for(x = 1; x < N; x*=2);

    for(int i = x; i < x + N; ++i)
        cin >> segment_tree[i];

    for(int i = x-1; i > 0; --i) {
        segment_tree[i] = segment_tree[2*i] + segment_tree[2*i +1];
    }

    ll a, b, c;
    for(int i = 0; i < M + K; ++i) {
        cin >> a >> b >> c;
        if(a == 1) { // update
            update(b, c);
            continue;
        }

        if(a == 2) { // query
            cout << query(b, c) << endl;
            continue;
        }
    }

    // for(int i = 0 ;i < segment_tree.size(); ++i) {
    //     cout << segment_tree[i] << ' ';
    // }
    // cout<< endl;

    return 0;
}

