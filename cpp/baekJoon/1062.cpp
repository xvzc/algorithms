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
 
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int word_to_bits(string s) {
    int ret = 0;
    for (auto c : s) {
        ret |= 1 << (c - 'a');
    }

    return ret;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int N, K; cin >> N >> K;

    vector<int> word_bits;
    string temp;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        word_bits.push_back(word_to_bits(temp));
    }

    int antatica = 0;
    antatica |= 1 << ('a'-'a');
    antatica |= 1 << ('n'-'a');
    antatica |= 1 << ('t'-'a');
    antatica |= 1 << ('i'-'a');
    antatica |= 1 << ('c'-'a');

    int answer = 0;
    for (int i = 0; i < (1 << 26); ++i) {
        if ((i & antatica) != antatica) {
            continue;
        }

        if (__builtin_popcount(i) != K) {
            continue;
        }

        int cnt = 0;
        for (auto word : word_bits) {
            if ((word & i) == word) {
                cnt++;
            }
        }

        answer = answer > cnt ? answer : cnt;
    }

    cout << answer << endl;

    return 0;
}

