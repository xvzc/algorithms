#include <iostream>

#define ONE 0
#define FIVE 1
#define TEN 2
#define QUARTER 3

using namespace std;

int X, one, five, ten, quarter, i;

int dp[10001][4] = {{}};

int main(int argc, char *argv[])
{
	scanf("%d %d %d %d %d", &X, &one, &five, &ten, &quarter);

	for(i=1;i<=X;i++){
		if(one > 0){
			dp[i][ONE] = dp[i-1][ONE]+1;
			dp[i][FIVE] = dp[i-1][FIVE];
			dp[i][TEN] = dp[i-1][TEN];
			dp[i][QUARTER] = dp[i-1][QUARTER];
			one--;
			continue;
		}
	}

	printf("%d %d %d %d %d\n", X, ONE, five, ten, quarter);

	return 0;
}
