import re

def solution(new_id):
    answer=''

    out1=new_id.lower()  # to lower case
    out2=re.sub(pattern='[^0-9a-z-._]', repl='', string=out1)  # replace invalid charactors
    out3=re.sub(pattern='[.]+', repl='.', string=out2)  # replace all dots occured more than twice
    out4=re.sub(pattern='[.]$|^[.]', repl='', string=out3)  # replace all dots occured more than twice
    out5=out4
    if out5 == '':
        out5='a'

    out6=out5

    if len(out6) >= 16:
        out6=out6[:15]
        out6=re.sub(pattern='[.]$', repl='', string=out6)  # replace all dots occured more than twice

    out7=out6
    if len(out7) <= 2:
        out7+=out7[-1]*(3-len(out7))

    answer=out7
    return answer

new_id="...!@BaT#*..y.abcdefghijklm"
print(solution(new_id))
