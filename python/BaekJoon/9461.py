import sys

sysin = sys.stdin.readline
T = int(sysin())

dp = [0, 1, 1, 1, 2, 2, 3]

for i in range(7, 101) : 
    dp.append(dp[i-5] + dp[i-1])


for i in range(T) :
    print(dp[int(sysin())])