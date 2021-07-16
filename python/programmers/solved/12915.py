def solution(strings, n):
    return sorted(strings, key=lambda x: (x[n], x))

strings = ["sun", "bed", "car"]
n = 1

print(solution(strings, n))
