import sys
import math

input = sys.stdin.readline

N = int(input())
arr = [0] * N

for i in range(len(arr)):
    arr[i] = int(input())

total_gcd = arr[1] - arr[0]

for i in range(1, len(arr)):
    total_gcd = math.gcd(total_gcd, arr[i] - arr[i - 1])

print((arr[N - 1] - arr[0]) // total_gcd - N + 1)
