from collections import deque

def solution(board, moves):
    answer = 0
    board_stack = deque()
    basket = deque()


    for i in range(len(board)):
        sub_q=deque()
        for j in range(len(board)):
            if board[j][i] != 0:
                sub_q.appendleft(board[j][i])

        board_stack.append(sub_q)

    for move in moves:
        doll = board_stack[move-1].pop() if board_stack[move-1] else 0

        if doll == 0:
            continue

        if not basket:
            basket.append(doll)
        elif basket[-1] == doll:
            basket.pop()
            answer+=2
        else:
            basket.append(doll)

    return answer


# input
board=[[0,0,0,0,0],
       [0,0,1,0,3],
       [0,2,5,0,1],
       [4,2,4,4,2],
       [3,5,1,3,1]]

moves=[1,5,3,5,1,2,1,4]
a=[1,2,3,4,5,6]
print(solution(board, moves))
