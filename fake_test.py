n = int(input())


subj_scores = list(map(int, input().split()))

m = max(subj_scores)

new_subj_scores = [(i / m*100) for i in subj_scores]

print(sum(new_subj_scores) / len(new_subj_scores))