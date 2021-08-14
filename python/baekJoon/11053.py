N = int(input())
arr = list(map(int, input().split()))
arr.insert(0, 0)

DP = [0]*(N+1)
DP[1] = 1

for i in range(1, len(arr), +1) :
    j = i-1
    max_idx = 0

    for j in range(i-1, -1, -1) :
        if arr[j] < arr[i] and DP[j] > DP[max_idx] :
            max_idx = j

    DP[i]=DP[max_idx]+1

print(max(DP))


# 문제
# 수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

# 예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.
# 40 10 30 20 40 70 50

# 입력
# 첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.

# 둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)

# 출력
# 첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.

# 예제 입력 1 
# 6
# 10 20 10 30 20 50
# 예제 출력 1 
# 4