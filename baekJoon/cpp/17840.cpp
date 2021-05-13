// #define SUBMIT
#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define MAX 100

int Q; // Test case
int M; // remainder
int N;

ll dp[MAX] = {0, 1, 1};
ll dp_mod[MAX] = {0, 1, 1};

using namespace std;

int main(int argc, char const *argv[]){

#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false); cin.tie(NULL);


    for(int i = 3; i < MAX; ++i){
        dp[i] = dp[i-1] + dp[i-2];
        dp_mod[i] = (dp_mod[i-1]%5 + dp_mod[i-2]%5)%5;
    }
     /* code */

#ifndef SUBMIT
/* DEBUG */
    for(auto const& value : dp)
        cout << value << " "; 
    cout << endl;
    for(auto const& value : dp_mod)
        cout << value << " "; 
    cout << endl;
    
#endif
    return 0;
}
