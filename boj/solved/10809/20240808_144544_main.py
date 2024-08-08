import sys

s = input()

first_indice = [-1]*26
for i in range(len(s)):
    idx = ord(s[i]) - ord('a')
    # print(idx)
    if first_indice[idx] != -1:
        continue
    else:
        first_indice[idx] = i

print(*first_indice)
