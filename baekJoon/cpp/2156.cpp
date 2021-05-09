#include <iostream>
#define _max(x,y) x>y?x:y

using namespace std;
int n,i;

int arr[10003] = {0, };
int dp[10003] = {0, };

int main(int argc, char *argv[])
{
	cin >> n;

	for (i = 3; i < n+3; ++i) {
		cin >> arr[i];
	}

	for (i = 3; i < n+3; ++i) {
		dp[i] = _max(arr[i]+dp[i-1]+dp[i-3], arr[i]+dp[i-2]);
		dp[i] = _max(dp[i], dp[i-1]);
	}

	cout << dp[n+2] << endl;;

	// for (i = 1; i <= n; ++i) {
	//     cout << arr[i] << endl;
	// }
	
	return 0;
}
