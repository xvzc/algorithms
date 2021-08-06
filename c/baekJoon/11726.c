#include <stdio.h>
long long dp[1001];

main(N,i)
{
	scanf("%d", &N);

	dp[1] = 1;
	dp[2] = 2;

	for(i=3;i<=N;i++)
		dp[i] = (dp[i-1] + dp[i-2])%10007;

	printf("%d\n", dp[N]);

}
