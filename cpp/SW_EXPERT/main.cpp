#include<iostream>

using namespace std;

long long dp[10000][16];

int solution(string s) {
    int len = s.length();

    for(int i=1; i < len; i++){
        int d = s[i] -'A';

        for(auto &val : dp[i]) val = 0;

        for(int j=0; j < 16; j++){
            for(int k=0; k < 16; k++){
                if(!dp[i-1][j] || !(k & (1<<d))) continue;
                if(j&k) dp[i][k] = (dp[i][k] + dp[i-1][j])%1000000007;
            }
        }
    }

    int sum =0;
    for(int i=0; i<16; i++)
        sum=(sum + dp[s.length()-1][i])%1000000007;

    return sum;
}

int main() {
	int test_case;
	int T;
    string s;
    // freopen("input.txt", "r", stdin);
	cin>>T;
	for( test_case = 1; test_case <= T; ++test_case) {
        cin >> s;

        int first = (1 << (s[0]-'A')) | 1;

        for(int i = 0; i < 16; i++) {
            if((i&first) == first) {
                dp[0][i] = 1;
            }
            else 
                dp[0][i] = 0;
        }
        
        // #1 29
        // #2 88253169

        cout << "#" << test_case << " " << solution(s) << endl;
	}
	return 0;
} 
