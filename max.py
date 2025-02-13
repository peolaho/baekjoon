array = []
for i in range(9):
    line = input().split()
    array += map(int, line)
    
max_value = max(array)
print(max_value)
print(array.index(max_value) // 9 + 1, array.index(max_value) % 9 + 1)