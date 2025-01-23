import sys

a, b = map(int, sys.stdin.readline().split())

if a > b:
    print('>')

if a < b:
    print('<')

if a == b:
    print('==')
