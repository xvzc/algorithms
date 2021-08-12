#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)
#define endl '\n'

#define vi vector<int>
#define PB push_back

#define pii pair<int,int>
#define MP make_pair
#define X first
#define Y second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/***********  GLOBALS  ***********/
int a, b;
/*********************************/

/*********** FUNCTIONS ***********/
string solution(int a, int b) {
    if(b % a == 0 && b / a)
        return "factor";
    else if(a % b == 0 && a / b)
        return "multiple";
    else
        return "neither";
}
/*********************************/

#define SUBMIT
int main() {
	io_faster;

	#ifndef SUBMIT
	from_test_case;
	#endif

    while(cin >> a >> b && (a != 0 && b != 0))
        cout << solution(a, b) << endl;

	return 0;
}
