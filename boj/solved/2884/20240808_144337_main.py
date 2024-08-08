H, M = map(int, input().split())

H = H if M >= 45 else (H - 1) % 24
M = (M - 45) % 60
print(H, M)
