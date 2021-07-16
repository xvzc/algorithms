#include <bits/stdc++.h>

#define endl '\n'
// #define ll long long
typedef long long ll;
#define ull unsigned long long
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)

using namespace std;
/**** VARIABLES ****/
ull N;
/*******************/

/**** FUNCTIONS ****/
void solution(int n){
    while(true){
        cout << N << " ";
        if(N == 1) break;
        else if(N % 2) N = 3*N + 1;
        else N/=2;
    }
}
/*******************/

// #define SUBMIT
int main(){
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif
    cin >> N;
	solution(N);
	return 0;
}
