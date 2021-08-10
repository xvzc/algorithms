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
/*********************************/

/*********** FUNCTIONS ***********/
int solution(string &str) {
    stringstream ss(str);
    string token;

    vector<string> tokens;
    while(getline(ss, token, '-'))
        tokens.push_back(token);

    long long sum = 0;
    for(int i=0; i < tokens.size(); ++i) {
        int sub_sum = 0;
        string str_num;
        for(auto &c : tokens[i]) {
            if('0' <= c && c <= '9')
                str_num += c;
            else {
                sub_sum += stoi(str_num);
                str_num.clear();
            }
        }
        sub_sum += stoi(str_num);
        str_num.clear();

        sum = i == 0 ? sum+sub_sum : sum-sub_sum;
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

    string str;
    cin >> str;

    cout << solution(str) << endl;

	return 0;
}
