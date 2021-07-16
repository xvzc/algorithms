#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;

void solve(){
    for (int i = 1; i < N; ++i) {
        int sum = i;
        int num = i;

        do {
            sum += num % 10;
            num /= 10;
        } while (num != 0);

        if (sum == N) {
            cout << i << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N;
    solve();
    return 0;
}