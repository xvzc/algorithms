#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
ll N, i, j;
ll answer;
int digits[5];


bool isAnswer(int number) {
    string num_str = to_string(number);

    if(num_str.length() == 1 || num_str.length() == 2){
        return true;
    }

    int prv_diff = (num_str[1] -'0') -(num_str[0] - '0');

    for(int i = 2; i < num_str.length(); i++){
       if((num_str[i] -'0') -(num_str[i-1] - '0') != prv_diff){
           return false;
       }
    }
    
    return true;
}

void solve(){
    /* CODE */
    cin >> N;

    for(i = 1; i <= N; ++i){
        if(isAnswer(i)){
            answer++;
        }
    }


    cout << answer;
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