#include <bits/stdc++.h>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, j, k;
bool num[10001];

int make_number(int n){
    string s = to_string(n);

    int sum_digits=0;
    for(int i=0; i<s.length(); ++i) {
        sum_digits += s[i] - '0';
    }
    return n + sum_digits;
}

void solve(){
    for(i = 1; i <= 10000; i++){
        int ret = make_number(i);
        if(ret <= 10000){
            num[ret] = true;
        }
    }
    for(i = 1; i <= 10000; i++){
        if(!num[i])
            cout << i << endl;

    }

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    solve();
    return 0;
}