#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int N;

struct compare {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        } else {
            return abs(a) > abs(b);
        }
    }
};
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N;
    priority_queue<int, vector<int>, compare> pq;

    int temp;
    while(N--) {
        cin >> temp;
        if (temp == 0) {
            if (pq.empty()) {
                cout << 0 << endl;
            } else {
                cout << pq.top() << endl;
                pq.pop();
            }
        } else {
            pq.push(temp);
        }
    }

    return 0;
}

