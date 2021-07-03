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


