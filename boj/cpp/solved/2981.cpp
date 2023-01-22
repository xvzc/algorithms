#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// global variables ****************
// *********************************

// functions ***********************
vector<int> find_divisor(int num) {
    vector<int> ret;

    for(int i = 2; i*i <= num; ++i) {
        if(num % i == 0) {
            ret.push_back(i);
            if(i != num/i) ret.push_back(num/i);
        }
    }

    return ret;
}

vector<int> solution(vector<int> &v) {
    vector<int> diff;
    for(int i = 1; i < v.size(); ++i) {
        diff.push_back(v[i] - v[i-1]);
    }

    int igcd = diff.front();
    for(auto i : diff) {
        igcd = gcd(igcd, i);
    }

    vector<int> ret = find_divisor(igcd);
    ret.push_back(igcd);
    sort(ret.begin(), ret.end());

    return ret;
}
// *********************************

#define submit
int main() {
	io_faster;

	#ifndef submit
	from_test_case;
	#endif

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> ret = solution(v);

    for(auto i : ret)
        cout << i << ' ';


    return 0;
}

