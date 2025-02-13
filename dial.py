word = input().lower()

dial_chars = ['abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz']

result = 0

for char in list(word):
    for i, dial_char in enumerate(dial_chars):
        if char in list(dial_char):
            result += (i + 3)  

print(result)

# ABC: 2 
# DEF: 3 
# GHI: 4 
# JKL: 5 
# MNO: 6 
# PQRS: 7 
# TUV: 8 
# WXYZ: 9