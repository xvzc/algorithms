def solution(answers):
    answer = []
    person1=[1,2,3,4,5]
    person2=[2,1,2,3,2,4,2,5]
    person3=[3,3,1,1,2,2,4,4,5,5]

    person1_score=0
    person2_score=0
    person3_score=0

    for i in range(len(answers)):
        if answers[i] == person1[i % 5]:
            person1_score+=1

        if answers[i] == person2[i % 8]:
            person2_score+=1

        if answers[i] == person3[i % 10]:
            person3_score+=1

    max_score = max(person1_score, person2_score, person3_score)

    if person1_score == max_score:
        answer.append(1)

    if person2_score == max_score:
        answer.append(2)

    if person3_score == max_score:
        answer.append(3)

    return answer

answers = [1,2,3,4,5]
print(solution(answers))
