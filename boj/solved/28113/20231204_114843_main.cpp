import sys
input = sys.stdin.readline

n, a, b = map(int, input().split())
if a == b:
    print("Anything")
elif a < b:
    print("Bus")
else:
    print("Subway")
