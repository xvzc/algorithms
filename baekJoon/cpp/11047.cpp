#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define ull unsigned long long
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)

using namespace std;
/**** VARIABLES ****/
int a, b;
/*******************/

/**** FUNCTIONS ****/
void solve(){
	
}
int gcd(int x, int y){
	return y ? gcd(y, x%y) : x;
}
/*******************/

#define SUBMIT
int main(){
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif
	
	cin >> a >> b;
	int gcd_result = gcd(a, b);
	cout << gcd_result << endl;
	cout << a*b/gcd_result << endl;


	solve();
	return 0;
}