T = int(input())

P = []

for i in range(T):
    R, S = input().split()
    R = int(R)
    S = list(S)
    
    P += [''.join([i * R for i in S])]
    
print('\n'.join(P))