import sys
input = sys.stdin.readline
a, b = map(int, input().split())

is_lunch = (12 <= a <= 16)
is_drink = (b == 1)
print(280 if not is_lunch or is_drink else 320)
