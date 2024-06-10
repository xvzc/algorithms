import sys
import math

sys.setrecursionlimit(1000000)
input = sys.stdin.readline

n = int(input().split()[0])
for i in range(n):
    a, b = map(int, input().split())
    print(int(a*b/math.gcd(a, b)))


