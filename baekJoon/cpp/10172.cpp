#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int A, B, C;


void solve(int A, int B, int C){
    cout << (A+B)%C << endl;
    cout <<((A%C)+(B%C))%C <<endl;
    cout << (A*B)%C << endl;
    cout << ((A%C)*(B%C))%C << endl;

#ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> A >> B >> C;
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    solve(A, B, C);
    return 0;
}