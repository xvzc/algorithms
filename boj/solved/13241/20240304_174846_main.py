import sys
import math

sys.setrecursionlimit(1000000)

N, M = map(int, sys.stdin.readline().split())
print(int(N*M/math.gcd(N, M)))
