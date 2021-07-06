<<<<<<< HEAD
def solution(clothes):
    answer = 0
    hmap={}
    for cloth in clothes:
        if cloth[1] not in hmap:
            hmap[cloth[1]]=[]
            hmap[cloth[1]].append(cloth[0])
        else:
            hmap[cloth[1]].append(cloth[0])

    print(hmap)

    return answer


clothes=[["yellowhat", "headgear"], ["bluesunglasses", "eyewear"], ["green_turban", "headgear"]]
solution(clothes)


=======
def solution(absolutes, signs):
    answer = 0
    for i in range(len(absolutes)):
        answer = answer+absolutes[i] if signs[i] else answer-absolutes[i]
    return answer



absolutes=[4,7,12]
signs=[True,False,True]
print(solution(absolutes, signs))
>>>>>>> 700aff5e1c056b96d192285e5ad09ca678c24d20
