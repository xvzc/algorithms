#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second
#define all(x) x.begin(),x.end()

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int N, K;
bool word[50][26];
bool learned[26];
int answer = 0;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int count() {
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 26; ++j) {
            if (!learned[j] && word[i][j]) {
                cnt--;
                break;
            }
        }
        cnt++;
    }
    return cnt;
}

bool is_promising() {
    if (!learned['a'-'a'])
        return false;

    if (!learned['n'-'a'])
        return false;

    if (!learned['t'-'a'])
        return false;

    if (!learned['i'-'a'])
        return false;

    if (!learned['c'-'a'])
        return false;

    return true;
}

void gogosing(int idx, int cnt) {
    if (cnt == K) {
        if(!is_promising()) {
            return;
        }

        answer = max(answer, count());
        return;
    }


    for (int i = idx+1; i < 26; ++i) {
        learned[i] = true;
        gogosing(i, cnt + 1);
        learned[i] = false;
    }
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> K;
    string temp;
    for (int i = 0; i < N ; ++i) {
        cin >> temp;
        for (auto c : temp) {
            word[i][c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; ++i) {
        learned[i] = true;
        gogosing(i, 1);
        learned[i] = false;
    }

    cout << answer;

    return 0;
}
