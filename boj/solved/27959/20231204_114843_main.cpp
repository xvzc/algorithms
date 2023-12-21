import sys

input = sys.stdin.readline
a, b = map(int, input().split())

print("Yes" if a * 100 >= b else "No")
