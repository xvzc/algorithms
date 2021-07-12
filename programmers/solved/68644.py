def solution(numbers):
    return sorted(list(set([numbers[i] + numbers[j] for i in range(len(numbers)) for j in range(i+1, len(numbers))])))

# numbers=[2,1,3,4,1]
numbers=[5,0,2,7]
print(solution(numbers))

