import sys

input = sys.stdin.readline
# N = 28
#
# arr = [False] * (N + 1)
# for i in range(1, N + 1):
#     for j in range(len(arr)):
#         if j % i == 0:
#             arr[j] = not arr[j]
#
#     for k in range(1, N + 1):
#         print('T' if arr[k] else 'F', end='')
#     print()
#
N = int(input())
print(int(N ** 0.5))
