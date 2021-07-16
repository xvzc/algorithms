def solution(absolutes, signs):
    answer = 0
    for i in range(len(absolutes)):
        answer = answer+absolutes[i] if signs[i] else answer-absolutes[i]
    return answer



absolutes=[4,7,12]
signs=[True,False,True]
print(solution(absolutes, signs))
