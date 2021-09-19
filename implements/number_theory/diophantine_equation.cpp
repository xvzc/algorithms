#include <bits/stdc++.h>

using namespace std;

pair<int, int> diophantine_equation(int a, int b, int c) {

    int s0, t0, r0;
    int s1, t1, r1, q1;
    int s_cur, t_cur, r_cur, q_cur;

    s0 = 1, t0 = 0, r0 = a;
    s1 = 0, t1 = 1, r1 = b, q1 = a / b;

    while(1) {
        r_cur = r0 % r1; // break if r_cur == 0

        if(r_cur == 0)
            break;

        s_cur = s0 - s1*q1; 
        t_cur = t0 - t1*q1; 
        q_cur = r1 / r_cur;

        s0 = s1, t0 = t1, r0 = r1;
        s1 = s_cur, t1 = t_cur, r1 = r_cur, q1 = q_cur;
    } 
    return {s1, t1};
}

int main() {
    pair<int, int> pii = diophantine_equation(17, 72, 1);
    cout << pii.first << ' ' << pii.second;
    return 0;
}
