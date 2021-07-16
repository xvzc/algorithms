def solution(a, b):
    return sum(list(range(min(a, b), max(a, b)+1)))

a,b = 3,5
print(solution(a, b))
