def solution(d, budget):
    answer = 0
    d.sort()

    cur_sum = 0
    for each in d:
        cur_sum += each
        if cur_sum > budget:
            break
        else:
            answer+=1

    return answer


d = [1,3,2,5,4]
budget = 9
print(solution(d, budget))
