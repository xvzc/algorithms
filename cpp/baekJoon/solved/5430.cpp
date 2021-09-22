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
string solution(deque<int> &dq, string &s) {
    bool is_reversed = false;

    for (auto c : s) {
        if (c == 'R') {
            is_reversed = !is_reversed;
            continue;
        }

        if(dq.empty())
            return "error";

        if(is_reversed)
            dq.pop_back();
        else
            dq.pop_front();
    }

    string answer = "[";
    if (!is_reversed){
        for(auto it = dq.begin(); it != dq.end(); ++it) {
            answer += (to_string((int)*it));
            answer.push_back(',');
        }
    }

    if(is_reversed) {

        for(auto it = dq.rbegin(); it != dq.rend(); ++it) {
            answer += (to_string((int)*it));
            answer.push_back(',');
        }
    } 

    if(answer.back() == ',')
        answer.pop_back();
    answer.push_back(']');

    return answer;
}
// *********************************

#define SUBMIT
int main() {
    io_faster;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int T, n; cin >> T;
    string p, s; 

    while(T--) {
        cin >> p >> n >> s;

        deque<int> dq;
        string temp = "";
        for (auto c : s) {
            if (c == '[' || c == ']')
                continue;
            if (c == ',') {
                dq.push_back(stoi(temp));
                temp = "";
                continue;
            }

            temp.push_back(c);
        }

        if(!temp.empty())
            dq.push_back(stoi(temp));


        // for(auto &it : dq){
        //     cout << it << ' ';
        // }
        // cout << endl;

        cout << solution(dq, p) << endl;
    }

    return 0;
}

