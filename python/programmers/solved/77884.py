def num_of_divisor(num):
    res = 0
    for i in range(1, num+1):
        if num % i == 0:
            res+=1
    return res


def solution(left, right):
    answer = 0
    for i in range(left, right+1):
        if num_of_divisor(i) % 2 == 0:
            answer+=i
        else :
            answer-=i

    return answer


left = 13
right = 17
print(solution(left, right))
