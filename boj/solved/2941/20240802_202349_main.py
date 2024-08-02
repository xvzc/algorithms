import sys

s = input()

croatian = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
cnt = 0

i = 0
while i < len(s):
    if s[i] == "c" and i <= len(s) - 2 and s[i + 1] in ["=", "-"]:
        cnt += 1
        i += 2
        continue

    if s[i] == "d" and i <= len(s) - 3 and s[i + 1] == "z" and s[i + 2] == "=":
        cnt += 1
        i += 3
        continue

    if s[i] == "d" and i <= len(s) - 2 and s[i + 1] == "-":
        cnt += 1
        i += 2
        continue

    if s[i] == "l" and i <= len(s) - 2 and s[i + 1] == "j":
        cnt += 1
        i += 2
        continue

    if s[i] == "n" and i <= len(s) - 2 and s[i + 1] == "j":
        cnt += 1
        i += 2
        continue

    if s[i] == "s" and i <= len(s) - 2 and s[i + 1] == "=":
        cnt += 1
        i += 2
        continue

    if s[i] == "z" and i <= len(s) - 2 and s[i + 1] == "=":
        cnt += 1
        i += 2
        continue

    cnt += 1
    i += 1

print(cnt)
