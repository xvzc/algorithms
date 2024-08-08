N = int(input())

dp = [-1, -1, -1, 1, -1, 1] + [0] * 4995

for i in range(6, 5001):
    if dp[i - 3] == -1 and dp[i - 5] == -1:
        dp[i] = -1
        continue

    if dp[i - 3] == -1:
        dp[i] = dp[i - 5] + 1
        continue

    if dp[i - 5] == -1:
        dp[i] = dp[i - 3] + 1
        continue

    dp[i] = min(dp[i - 3], dp[i - 5]) + 1

print(dp[N])
