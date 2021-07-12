def solution(s):
    if len(s) in (4, 6) and s.isdigit():
        return True

    return False


s = "bc34"
print(solution(s))
