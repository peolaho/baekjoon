word = input().lower()

result = 0
result += word.count('c=')
result += word.count ('c-')
result += word.count ('dz=')
result += word.count ('d-')
result += word.count ('lj')
result += word.count ('nj')
result += word.count ('s=')
result += word.replace('dz=', '').count ('z=')
result += len(word.replace('c=', ' ').replace('c-', ' ').replace('dz=', ' ').replace('d-', ' ').replace('lj', ' ').replace('nj', ' ').replace('s=', ' ').replace('z=', ' ').replace(' ', ''))
# result = (sum(
#     [word.count('c='),
#     word.count ('c-'),
#     word.count ('dz='),
#     word.count ('d-'),
#     word.count ('lj'),
#     word.count ('nj'),
#     word.count ('s='),
#     word.count ('z=')]
#     ) )

# word = word.replace('c=', '').replace('c-', '').replace('dz=', '').replace('d-', '').replace('lj', '').replace('nj', '').replace('s=', '').replace('z=', '')

print(result)