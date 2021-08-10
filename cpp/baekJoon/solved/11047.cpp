#include <bits/stdc++.h>

#define endl '\n'
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)

#define X first
#define Y second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

//#define SUBMIT
int main() {
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif

    int n, k, temp;
    vector<int> vec;
    cin >> n >> k;

    for(int i=0; i < n; ++i) {
        cin >> temp;
        vec.push_back(temp);
    }

    int cnt = 0;
    int q;
    for(int i = vec.size()-1; i >= 0; --i) {
        q = k/vec[i];
        if(q > 0) {
            cnt += q;
            k = k % vec[i];
        }
    }

    cout << cnt;

	return 0;
}
