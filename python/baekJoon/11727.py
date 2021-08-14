N = int(input())

DP = [0]*(1001)

DP[1] = 1
DP[2] = 3
DP[3] = 5


for i in range(3, len(DP)) :
    DP[i] = DP[i-1] + 2*DP[i-2]

print(DP[N]%10007)
