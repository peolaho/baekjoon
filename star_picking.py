N = int(input())

print('\n'.join ([(abs(N - 1 - i) * ' ') + ((abs(abs(N - 1 - i) - N) * 2 - 1) * '*') for i in range(N * 2 - 1)]))