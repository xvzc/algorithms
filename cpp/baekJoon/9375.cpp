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

    int T, N ;
    string k, v;
    cin >> T;

    while(T--) {
        cin >> N;
        unordered_map<string, int> um;
        while(N--) {
            cin >> v >> k;
            um[k]++;
        }
        int answer = 1;
        for(auto it : um)
            answer *= (it.second+1);

        cout << answer-1 << endl;
    }


	solution();

    return 0;
}

