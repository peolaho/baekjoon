N = int(input())

background = [[0 for i in range(100)] for i in range(100)]

for _ in range(N):
    x, y = map(int, input().split())
    
    for i in range(10):
        for j in range(10):
            background[x + i][y + j] += 1

# print('\n'.join(''.join(map(str, i)) for i in background))

print(sum([sum(int(i > 0) for i in i) for i in background]))