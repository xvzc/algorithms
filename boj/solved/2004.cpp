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
ll num_of_five(ll num) {
    ll ret = 0;
    for(ll i=5; i <= num; i=i*5) {
        ret+=num/i;
    }
    return ret;
}

ll num_of_two(ll num) {
    ll ret = 0;
    for(ll i=2; i <= num; i=i*2) {
        ret+=num/i;
    }
    return ret;
}
// *********************************

// #define TEST
int main() {
	io_faster;

	#ifdef TEST
	from_test_case;
	#endif

    ll n, m;
    cin >> n >> m;

    cout << min(num_of_five(n) - ( num_of_five(m) + num_of_five(n-m) ), num_of_two(n) - ( num_of_two(m)+num_of_two(n-m) ) );

    return 0;
}



