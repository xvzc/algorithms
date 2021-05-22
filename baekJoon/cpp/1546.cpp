#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int N, i;
double scores[1000];


void solve(){
    cin >> N;

    int max_score = -987654321;

    for(i = 0; i < N; ++i){
        cin >> scores[i];
        max_score = scores[i] > max_score ? scores[i] : max_score;
    }

    double sum = 0;
    for(i = 0; i < N; i++){
        sum += 100*(scores[i]/max_score);
    }

    cout << sum/N << endl;

    /* CODE */

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