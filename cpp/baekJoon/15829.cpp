#include <bits/stdc++.h>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif
    int M = 1234567891;
    int r = 31;

    int l;
    string s;
    cin >> l >> s;

    ll base = 1;
    ll ans = 0;
    for(int i = 0; i < l; ++i) {
        int num = s[i]-'a' + 1;
        ans = (ans % M + ((num % M) * (base % M)) % M) % M;
        base = ((base % M) * (r % M)) % M;
    }
    cout << ans;

    return 0;
}

