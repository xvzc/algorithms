import sys
import math

sys.setrecursionlimit(1000000)
input = sys.stdin.readline

trees = []
N = int(input())
for i in range(N):
    trees.append(int(input()))

gcd = trees[1] - trees[0]
for i in range(2, N):
    gcd = math.gcd(trees[i] - trees[i - 1], gcd)

answer = 0
for i in range(1, N):
    answer += (trees[i] - trees[i - 1]) // gcd - 1

print(answer)
