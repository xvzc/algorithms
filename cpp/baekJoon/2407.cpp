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
int n, m;
vector<vector<string>> dp(102, vector<string>(102, "0"));
/* ----------------------------------------------- */

string add(string num1, string num2) {
    string ret;

    string *temp = num1.size() < num2.size() ? &num1 : &num2;
    *temp = string(abs(int(num1.size() - num2.size())), '0') + *temp;

    bool carry = 0;
    for (int i = 0; i < num1.size(); ++i) {
        int digit1 = *(num1.rbegin() + i) - '0';
        int digit2 = *(num2.rbegin() + i) - '0';
        int sum = digit1 + digit2 + carry;
        carry = sum >= 10 ? 1 : 0;
        sum %= 10;
        ret.push_back(('0' + sum));
    }

    if (carry) {
        ret.push_back('1');
    }

    reverse(ret.begin(), ret.end());

    return ret;
}

string combi(int n,int r){
    if(dp[n][r] != "0") return dp[n][r];
    if(n == r || r == 0) return "1";
    else {
        dp[n][r] = add(combi(n-1, r-1), combi(n-1, r));
        return dp[n][r];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> n >> m;
    cout << combi(n, m) << endl;

    return 0;
}

