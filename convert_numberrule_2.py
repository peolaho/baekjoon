alphabet_uppers = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

N, B = map(int, input().split())

each_position = [N % B]
while N:
    each_position += [N % B]
    N //= B
    
each_position.pop(0)
print(''.join([alphabet_uppers[i] for i in each_position[::-1]]))