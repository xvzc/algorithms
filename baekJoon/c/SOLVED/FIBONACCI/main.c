#include <stdio.h>

int TestCases;
int N;
int dp[40][2];

main(i,j)
{
	scanf("%d", &TestCases);

	dp[0][0]=1;
	dp[0][1]=0;
	dp[1][0]=0;
	dp[1][1]=1;

	for(i=0, j=2; i < TestCases; i++) {
		scanf("%d", &N);

		if(j > N)
			printf("%d %d\n", dp[N][0], dp[N][1]);
		else{
			for(;j<=N; j++){
				dp[j][0] = dp[j-1][0] + dp[j-2][0];
				dp[j][1] = dp[j-1][1] + dp[j-2][1];
			}

			printf("%d %d\n", dp[N][0], dp[N][1]);
		}

	}
}
