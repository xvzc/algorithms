#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

using namespace std;

int N, x, y, max_profit;

int T[16];
int P[16];
int dp[16];

void dfs(int curDate, int prvEndDate, int curSum){
    if(curDate == N+1)
        return;

    if(prvEndDate >= curDate)
        return;
    
    int curEndDate = curDate + T[curDate]-1;
    if(curEndDate > N)
        return;

    curSum+=P[curDate];
    max_profit = max(curSum, max_profit);

    for(int nextDate=curEndDate+1; nextDate <= N; nextDate++){
        dfs(nextDate, curEndDate, curSum);
    }
}

int main(){

// #define SUBMIT
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for(int i=1; i <= N; i++){
        cin >> T[i] >> P[i];
    }

/* Code */
    for(int i=1; i <= N; ++i){
        dfs(i,0,0);
    }
/* Code end */

    cout << max_profit << endl;
    return 0;
}