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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    const int antatica = 532741;

    int n, k; cin >> n >> k;
    vector<int> v(n);
    string temp;

    for(int i = 0; i < n; ++i) {
        cin >> temp;
        int bits = antatica;
        for(auto c : temp)
            bits |= 1 << ((int)c - 'a');

        v[i] = bits;

    }

    int answer = 0;
    for(unsigned int i = 0; i < (1 << 26); ++i) {
        if((i & antatica) != antatica)
            continue;

        if(__builtin_popcount(i) != k)
            continue;

        int cnt = 0;
        for(auto word_bits : v) {
            if((i & word_bits) == word_bits) 
                cnt++;
        }

        answer = cnt > answer ? cnt : answer;
    }

    cout << answer << endl;

    return 0;
}
