from collections import defaultdict

def solution(nums):
    answer = 0
    dict_nums=defaultdict(int)

    for num in nums:
        dict_nums[num]+=1

    if len(nums)/2 <= len(dict_nums):
        answer = len(nums)/2
    else:
        answer = len(dict_nums)

    return answer



nums=[3,3,3,2,2,4]
print(solution(nums))
