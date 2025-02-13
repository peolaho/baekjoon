N, M = map(int, input().split())

A = []
for i in range(N):
    A += [input().split()]
    A[i] = list(map(int, A[i]))

B = []
for i in range(N):
    B += [input().split()]
    B[i] = list(map(int, B[i]))
    
result = []
for i in range(N):
    array_first = []
    for j in range(M):
        array_first += [(A[i][j] + B[i][j])]
    result += [array_first]

for i in range(N):
    print(' '.join(map(str ,result[i])))