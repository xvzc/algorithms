N = int(input())

n = 1
prv_sum = 1

if N == 1:
    print("1/1")
    exit(0)

cur_len = 1

while (cur_len - 1) * (cur_len) / 2 <= N:
    if cur_len % 2 == 1:
        a = list(reversed(range(1, cur_len + 1)))
        b = list(range(1, cur_len + 1))
    else:
        a = list(range(1, cur_len + 1))
        b = list(reversed(range(1, cur_len + 1)))

    for i in range(cur_len):
        if n == N:
            print(f"{a[i]}/{b[i]}")
            exit(0)
        n += 1

    cur_len += 1


