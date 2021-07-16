def get_hand(target, pr, pl, hand)->chr:
    from_the_right = abs(target[0] - pr[0])+ abs(target[1] - pr[1])
    from_the_left = abs(target[0] - pl[0])+ abs(target[1] - pl[1])
    if from_the_right < from_the_left:
        return 'R'
    elif from_the_right > from_the_left:
        return 'L'
    else:
        if hand[0] == 'r':
            return 'R'
        else:
            return 'L'

def solution(numbers, hand):
    key_pad=[(3, 1),
             (0, 0), (0, 1), (0, 2),
             (1, 0), (1, 1), (1, 2),
             (2, 0), (2, 1), (2, 2),
             (3, 0), (3, 1), (3, 2)]

    for_left, for_right = (1,4,7), (3,6,9)
    cur_left, cur_right = 10, 12

    answer = ''

    for num in numbers:
        if num in for_left:
            cur_left=num
            answer+='L'
        elif num in for_right:
            cur_right=num
            answer+='R'
        else:
            next_hand=get_hand(key_pad[num], key_pad[cur_right], key_pad[cur_left], hand)
            if next_hand[-1] == 'R':
                cur_right=num
                answer+=next_hand
            else:
                cur_left=num
                answer+=next_hand
    return answer

numbers=[1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
hand="right"
print(solution(numbers, hand))
