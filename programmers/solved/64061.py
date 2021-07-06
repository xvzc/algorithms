def solution(board, moves):
    answer = 0
    stack=[0]
    for move in moves:
        for height in range(len(board)):
            doll = board[height][move-1]

            if doll:
                if stack[-1] == doll:
                    answer+=2
                    stack.pop()
                else:
                    stack.append(doll)

                board[height][move-1]=0
                break

    return answer


# input
board=[[0,0,0,0,0],
       [0,0,1,0,3],
       [0,2,5,0,1],
       [4,2,4,4,2],
       [3,5,1,3,1]]

moves=[1,5,3,5,1,2,1,4]
print(solution(board, moves))
