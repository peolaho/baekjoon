T = int(input())

result = []

for i in range(T):
    string = input()
    result += [f'{string[0]}{string[-1]}']
    
print('\n'.join(result))