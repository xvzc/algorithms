#include <bits/stdc++.h>

using namespace std;

struct compare {
    bool operator()(pair<int, int>&p1, pair<int, int>&p2) {
        return p1.second > p2.second;
    }
};

int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare>  pq;

    pq.push({1, 2});
    pq.push({2, 4});
    pq.push({3, 1});
    pq.push({4, 3});
    pq.push({5, 19});
    pq.push({6, 13});

    while (!pq.empty()) {
        cout << pq.top().first << ' ' << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}

