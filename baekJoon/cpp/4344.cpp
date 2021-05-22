#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
ll i, j, k, l;
ll T, N;
double sum;
double scores[1000];


void solve(){

    cin >> N;
    sum = 0;
    for(i = 0; i < N; ++i){
        cin >> scores[i];
        sum += scores[i];
    }

    int avg = sum/N;
    int cnt = 0;
    for(i = 0; i < N; ++i){
        if(scores[i] > avg){
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(3);
    cout << (double)100*cnt/N << "%" << endl;

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    cin >> T;
    for(int f = 0; f < T; f++){
        solve();
    }
    return 0;
}