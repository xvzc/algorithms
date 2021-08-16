#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>

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
vector<string> solution(vector<int> &v) {
    int first = v.front();

    vector<string> ret;
    for(int i=1; i < v.size(); ++i) {
        int gcd_ = gcd(first, v[i]);
        string str = "";
        str+= to_string(first/gcd_);
        str+="/";
        str+= to_string(v[i]/gcd_);
        ret.push_back(str);
    }

    return ret;
}
// *********************************

#define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i < n; ++i) {
        cin >> v[i];
    }

	vector<string> res = solution(v);
    for(auto s : res) {
        cout << s << endl;
    }

    return 0;
}
