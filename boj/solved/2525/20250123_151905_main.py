import sys

h, m = map(int, sys.stdin.readline().strip().split())
d = int(sys.stdin.readline().strip())

m += d
h += m // 60
m = m % 60
h = h % 24

print(h, m)
