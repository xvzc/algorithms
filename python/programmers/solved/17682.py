def solution(dartResult):
    list_score = []

    i = 0
    while i < len(dartResult):
        _ascii = ord(dartResult[i])
        c = dartResult[i]

        if _ascii < 58 and _ascii >= 48:
            num = int(dartResult[i])
            if num == 1 and dartResult[i+1] == 0:
                print(num)
                num = 10
                i+=1
                continue

            list_score.append(num)
        elif c == 'S':
            list_score[-1]**=1
        elif c == 'D':
            list_score[-1]**=2
        elif c == 'T':
            list_score[-1]**=3
        elif c == '*':
            if len(list_score) == 1:
                list_score[-1]*=2
            else:
                list_score[-1]*=2
                list_score[-2]*=2
        elif c == '#':
            list_score[-1]*=-1
        else:
            pass

        i+=1


    return sum(list_score)


dartResult = '1S2D*3T'  # 37
print(solution(dartResult))

# 11 * 2 + 22 * 2 + 33
