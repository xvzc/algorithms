#include <bits/stdc++.h>
#include <unordered_map>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;

void solve(vector<int> v){
    vector<int> uniq;
    uniq.assign(v.begin(), v.end());

    sort(uniq.begin(), uniq.end());

    uniq.erase(unique(uniq.begin(), uniq.end()) , uniq.end());

    for(int i = 0; i < v.size(); ++i) {
        int cnt = 0;

        vector<int>::iterator low;
        low = lower_bound(uniq.begin(), uniq.end(), v[i]);
        cout << low - uniq.begin() << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;

    vector<int> v(N);
    for(int i = 0; i < N; ++i)
        cin >> v[i];

    solve(v);
    return 0;
}