T = int(input())

answer = ''

for _ in range(T) :
    s = input()

    stack = []
    for i in range(0, len(s)) :
        if s[i] == ')' and len(stack) == 0 :
            stack.append(')')
            break

        if s[i] == '(' :
            stack.append('(')
        elif s[i] == ')' and stack[-1] == '(' :
            stack.pop()

    if len(stack) == 0 :
        answer += 'YES\n'
    else :
        answer += 'NO\n'



answer = answer[:len(answer)-1]
print(answer)
    