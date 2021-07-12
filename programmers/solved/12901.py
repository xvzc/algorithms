import calendar

def solution(a, b):
    return ['MON','TUE','WED','THU','FRI','SAT','SUN'][calendar.weekday(2016, a, b)]

a = 5
b = 24
print(solution(a, b))

