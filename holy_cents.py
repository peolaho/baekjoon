T = int(input())

result = []
for i in range(T):
    C = int(input())
    result += [[C // 25, C % 25 // 10,C % 25 % 10 // 5,  C % 25 % 10 % 5]]
    
print('\n'.join([' '.join(map(str, i)) for i in result]))