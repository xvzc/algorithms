#include <iostream>

using namespace std;

int n,i;
long long dp[10001] = {0, 1, 1, };

int main(int argc, char *argv[])
{
	
	cin >> n;

	for (i = 3; i < n+1; ++i) {
		dp[i] = dp[i-1] + dp[i-2];
	}

	cout << dp[n] << endl;

	return 0;
}
