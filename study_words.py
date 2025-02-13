word = input().lower()

word_by_list = list(word)
word_in_alphabet = tuple(set(word_by_list))
word_in_used_max = []

for i in word_in_alphabet:
    word_in_used_max += [word_by_list.count(i)]
    
if word_in_used_max.count(max(word_in_used_max)) > 1:
    print('?')
    exit()
else:
    print(word_in_alphabet[word_in_used_max.index(max(word_in_used_max))].upper())