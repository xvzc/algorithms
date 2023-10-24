#include <bits/stdc++.h>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, N, output, cnt;


void solve(int N){

    output = N;
    do{
        if(output < 10) {
            output = output*10 + output;
        }
        else {
            int Q = output/10;
            int R = output%10;
            output = R*10 + (Q+R)%10;
        }
        cnt++;
    }while(N != output);

    cout << cnt;
    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N;
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    solve(N);
    return 0;
}