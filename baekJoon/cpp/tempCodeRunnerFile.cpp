#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int N, x, y;

int T[16];
int P[16];
int dp[16];

int main(){

#define SUBMIT
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for(int i=1; i <= N; i++){
        cin >> T[i] >> P[i];
    }

    dp[1] = P[1];
    for(int i = 1; i <= N; i++) {
        int endDate = i + T[i] - 1;
        if(endDate > N) {
            dp[i] = dp[i-1];
            continue;
        }
        for(int j=1; j < i; j++){
            int daysLeft = i-j;
            if(daysLeft >= T[j]){
                dp[i] = max(dp[j] + P[i], dp[i]);
            } else {
                dp[i] = max(dp[i-1], dp[i]);
            }
        }
    }


#ifndef SUBMIT
    for(auto const& value : T)
        cout << value << " "; 
    cout << endl;
    
    for(auto const& value : P)
        cout << value << " "; 
    cout << endl;

    for (auto const &value : dp)
        cout << value << " ";
    cout << endl;
#endif


    cout << dp[N] << endl;
    return 0;
}