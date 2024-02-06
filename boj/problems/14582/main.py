jeminis = list(map(int, input().split()))
startlink = list(map(int, input().split()))
jScore = 0; sScore = 0; jWin = False
for i in range(9):
  jScore += jeminis[i]
  sScore += startlink[i]
  if jScore > sScore:
    jWin = True

if jWin:
  print('Yes')
else:
  print('No')
