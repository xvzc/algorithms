#include <bits/stdc++.h>

#define endl '\n'
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case freopen("input.txt", "r", stdin)

#define vi vector<int>
#define PB push_back
#define MP make_pair

#define pii pair<int,int>
#define X first
#define Y second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/**** VARIABLES ****/
string s;
/*******************/

/**** FUNCTIONS ****/
string solution(string s){
    sort(s.rbegin(), s.rend());

    if(s.back() != '0')
        return "-1";

    int sum = 0;
    for(char c : s)
        sum+=(c -'0');

    if(sum < 3)
        return "-1";

    return sum % 3 ? "-1" : s;
}
/*******************/

#define SUBMIT
int main(){
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif

    cin >> s;
    cout << solution(s) << endl;


    return 0;
}
