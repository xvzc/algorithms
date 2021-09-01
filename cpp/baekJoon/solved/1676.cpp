#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// GLOBAL VARIABLES ****************
// *********************************

// FUNCTIONS ***********************
void solution() {}
// *********************************

#define SUBMIT
int main() {
	io_faster;

#ifndef SUBMIT
    from_test_case;
#endif
    int n;
    cin >> n;

    int two = 0;
    int five = 0;

    for (int i=1; i <= n; ++i) {
        int cur = i;
        while(1) {
            if(cur%2 == 0) {
                cur /= 2;
                two++;
            } else if(cur%5 == 0) {
                cur /= 5;
                five++;
            } else {
                break;
            }
        }
    }  

    cout << five << endl;

    return 0;
}
