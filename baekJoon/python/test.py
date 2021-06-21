import sys

nums = []
for i in range(3):
    nums.append(int(input()))


stack = []
result = []
for i in range(3):
    if len(stack) == 0:
        stack.append(i+1)
        result.append('+')