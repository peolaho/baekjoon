n, m = map(int, input().split())

result = list(range(1, n + 1))

for index in range(m):
    i, j = map(int, input().split())
    result[i - 1:j] = result[i - 1:j][::-1]
    
    
print(" ".join(str(i) for i in result))