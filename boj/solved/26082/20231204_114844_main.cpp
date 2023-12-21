import sys
input = sys.stdin.readline
a, b, c = map(int, input().split())

rival_quality = b // a
warboy_quality = rival_quality * 3
print(warboy_quality * c)
