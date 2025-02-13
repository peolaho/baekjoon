N = int(input())

# 2 3 5 9 17 33
#  1 2 4 8 16
value = 2

for i in range(N):
    value += pow(2, i)
    
print(pow(value, 2))