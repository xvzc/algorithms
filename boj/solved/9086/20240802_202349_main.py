import sys

N = int(input())
strings = [sys.stdin.readline().strip() for i in range(N)]
for s in strings:
    print(s[0]+s[-1])
