#include<stdio.h>

int dp[1000001];

void find(int num);
int min(int a, int b);

int main()
{
	int n;
	dp[1] = 0;
	scanf("%d",&n);
	find(n);
	printf("%d\n", dp[n]);
}

void find(int num){
	if(num < 2)
		return;

	if(dp[num-1]==0)
		find(num-1);

	dp[num] = dp[num-1] + 1;

	if(num%2 == 0)
		dp[num] = min(dp[num], dp[num/2]+1); 

	if(num%3 == 0)
		dp[num] = min(dp[num], dp[num/3]+1); 

	return;
}

int min(int a, int b){
	return a < b ? a : b;
}
