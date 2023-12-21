import sys

input = sys.stdin.readline

a, b, c = map(int, input().split())
print(c // b, c % b)
