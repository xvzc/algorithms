import math

def isPrime(num):
    for i in range(2, int(math.sqrt(num)+1)):
        if num % i == 0:
            return False

    return True


def solution(nums):
    answer = 0

    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            for k in range(j+1, len(nums)):
                three_sum=nums[i]+nums[j]+nums[k]
                if isPrime(three_sum):
                    answer+=1

    return answer


nums=[1,2,3,4]
print(solution(nums))
