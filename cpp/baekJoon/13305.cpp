#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)
#define endl '\n'

#define vi vector<int>
#define vull vector<unsigned long long>
#define PB push_back

#define pii pair<int,int>
#define MP make_pair
#define X first
#define Y second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/***********  GLOBALS  ***********/

/*********************************/

/*********** FUNCTIONS ***********/
ull solution(vull &vec_price, vull &vec_distance) {
    ull sum = 0;
    int base = 0;
    int dst = 1;
    while(base < vec_distance.size()) {
        sum += vec_distance[dst-1]*vec_price[base];

        if(vec_price[base] < vec_price[dst]){
            dst++;
        } else {
            base = dst;
            dst++;
        }
    }

    return sum;
}
/*********************************/

#define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    int n;
    vull vec_distance;
    vull vec_price;

    cin >> n;
    for(int i = 1; i < n; ++i) {
        ull temp;
        cin >> temp;
        vec_distance.push_back(temp);
    }
    for(int i=0; i < n; ++i) {
        ull temp;
        cin >> temp;
        vec_price.push_back(temp);
    }

	cout << solution(vec_price, vec_distance) << endl;

	return 0;
}

