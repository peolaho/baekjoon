array = []
rows = []
for i in range(5):
    line = input()
    array += [line]

for i in range(15):
    for j in range(5):
        try:
            print(array[j][i], end='')
        except IndexError:
            array[j] = ''
       