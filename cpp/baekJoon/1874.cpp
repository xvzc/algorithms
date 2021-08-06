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
int n;
vector<int> v;
/*******************/

/**** FUNCTIONS ****/
string solution(vector<int> &v, int n){
    stack<int> stk;
    string str;

    int cur_num = 1;
    int idx = 0;
    while(cur_num <= n || idx < v.size()) {
        if(stk.empty() || stk.top() != v[idx]) {
            stk.push(cur_num);
            str+="+\n";
            cur_num++;

            if(stk.top() > v[idx]){
                str = "NO";
                break;
            }
        } else {
            stk.pop();
            str+="-\n";
            idx++;
        }
    }

    return str;
}
/*******************/

#define SUBMIT
int main(){
	io_faster;
	#ifndef SUBMIT
	from_test_case;
	#endif

    cin >> n;
    for(int i=0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

	cout << solution(v, n);

	return 0;
}
