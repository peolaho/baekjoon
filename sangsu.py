number1, number2 = map(str, input().split())

number1 = int(number1[::-1])
number2 = int(number2[::-1])

if number1 > number2:
    print(number1)
else:
    print(number2)