import sys

a = int(input())
for i in range(a):
    a, b, c, d = map(int, sys.stdin.readline().split())
    if a * b > c * d:
        print("TelecomParisTech")
        continue
    if a * b < c * d:
        print("Eurecom")
        continue
    if a * b == c * d:
        print("Tie")


