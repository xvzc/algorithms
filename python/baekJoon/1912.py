N = int(input())
arr = list(map(int, input().split()))

arr.insert(0, 0) # index를 다루기 쉽게하기 위해 맨앞에 0 추가
inf = 1001
DP = [-inf]*(100001)

DP[1] = arr[1]

for i in range(2, N+1) : 
    DP[i] = max(arr[i], arr[i]+DP[i-1])

print(max(DP))
