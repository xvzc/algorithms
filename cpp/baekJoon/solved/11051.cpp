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
int mod10007_multiply(ll a, ll b) {
    return (a%10007*b%10007)%10007;
}

#define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif
    int x, y;
    cin >> x >> y;

    vector<ll> v(1001);
    v[0]=1;

    for (int i=1; i <= 1000; ++i) {
        v[i] = mod10007_multiply(i, v[i-1]);
    } 

    int mod_inverse = 1;
    int weight = mod10007_multiply(v[y], v[x-y]);
    for(int i=1; i <= 10005; i = i << 1) {
        if(i & 10005) {
            mod_inverse = (mod_inverse % 10007 * weight) % 10007;
        }
        weight = (weight%10007*weight%10007)%10007;
    }

    cout << (v[x]%10007 * mod_inverse%10007) << endl;

	solution();


    /* Fast exponent in mod p */
    /* Example of calculating the modulo inverse of 2^10007 */
    int result = 1;
    int a = 2;
    int p = 10007;
    for(int i=1; i <= (p-2); i = i << 1) {
        if(i & (p-2)) {
            result = (result % p * a % p) % p;
        }
        a = (a % p * a % p) % p;
    }

    cout << a << endl; 

    return 0;
}

