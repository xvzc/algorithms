// #define SUBMIT

#include <iostream>
#include <vector>
#include <algorithm>

#define endl '\n'
#define ll long long
#define MAX 100

int T[100001];
int rem;

int dp[MAX] = {0, 1, 1};
int dp_digits[5] = {0, };


using namespace std;

int main(int argc, char const *argv[]){

#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    

    for(int i = 3; i < MAX; ++i){
        dp[i] = (dp[i-1] + dp[i-2])%1000;

        if(dp[i] == 1000)
            dp_digits[4]++;
        else if(dp[i] >= 100)
            dp_digits[3]++;
        else if(dp[i] >= 10)
            dp_digits[2]++;
        else
            dp_digits[1]++;


    }
     /* code */

#ifndef SUBMIT
/* DEBUG */
    for(auto const& value : dp)
        cout << value << " "; 
    cout << endl;
    for(auto const& value : dp_digits)
        cout << value << " "; 
    cout << endl;
    
#endif
    return 0;
}