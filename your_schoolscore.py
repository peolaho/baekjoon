subj_gradess = {'A+': 4.5, 'A0': 4.0, 'B+': 3.5, 'B0': 3.0, 'C+': 2.5, 'C0': 2.0, 'D+': 1.5, 'D0': 1.0, 'F': 0}

units = []
unit_multiply_subj_gradeses = []

for i in range(20):
    subject, unit, level = map(str, input().split())
    unit = float(unit)
    unit = int(unit)
    if level == 'P':
        continue
    
    units += [unit]
    unit_multiply_subj_gradeses += [unit * subj_gradess[level]]
    
unit_multiply_subj_grades_sum = sum(unit_multiply_subj_gradeses)
unit_sum = sum(units)
if unit_multiply_subj_grades_sum == 0 or unit_sum == 0:
    print(0)
    exit()
print(unit_multiply_subj_grades_sum / unit_sum)