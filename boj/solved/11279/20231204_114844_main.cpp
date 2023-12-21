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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N; cin >> N;
    priority_queue<int, vector<int>, less<int>> pq;

    int temp;
    for(int i = 0; i < N; ++i) {
        cin >> temp;
        if(temp == 0) {
            if(pq.empty())
                cout << 0 << endl;
            else {
                cout << pq.top() << endl;
                pq.pop();
            }
            continue;
        }

        pq.push(temp);
    }

    return 0;
}

