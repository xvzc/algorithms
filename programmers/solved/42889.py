def solution(N, stages):
    answer = []

    index_to_value = {}
    num_of_success= len(stages)

    cnt = 0
    for stage in range(1, N+1):
        for user_stage in stages:
            if user_stage == stage:
                cnt+=1

        index_to_value[stage]=0 if num_of_success == 0 else cnt/num_of_success

        num_of_success-=cnt
        cnt = 0

    answer = sorted(index_to_value.items(), key=lambda item: item[1], reverse=True)
    answer = [i[0] for i in answer]

    return answer


N = 5
stages = [2, 1, 2, 6, 2, 4, 3, 3]
print(solution(N, stages))

