import math

day, night, target = list(map(int, input().split()))

remainder = (target-night)%(day-night)
quotient = (target-night)/(day-night)

if remainder > 0 :
    print(math.ceil(quotient))
else :
    print(int(quotient))
