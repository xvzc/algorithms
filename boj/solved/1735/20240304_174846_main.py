import sys
import math

sys.setrecursionlimit(1000000)
input = sys.stdin.readline

a, b = map(int, input().split())
c, d = map(int, input().split())

top, bot = b * c + a * d, b * d
gcd = math.gcd(top, bot)

print((top // gcd), (bot // gcd))
