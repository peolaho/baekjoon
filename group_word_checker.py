import math
N = int(input())

result = 0

for _ in range(N):
    isnot_grouped = 0
    word = input()
    word_characters = set(word)
    for _ in range(math.ceil(len(word)**(1/2)) + 1):
        for i in word_characters:
            word = word.replace(i * 2, i)  
            
    for i in word_characters:
        isnot_grouped += word.count(i) > 1
        
    if isnot_grouped == 0:
        result += 1
    
print(result)