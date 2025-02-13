a = []

for i in range(10):
    a += [int(input()) % 42]

result = len(set(a))
print(result)