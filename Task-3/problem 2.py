if __name__ == '__main__':
    nested_list = []
    for i in range(int(input())):
        name = input()
        grade = float(input())
        nested_list.append([name, grade])
grades=list(set([grade for _, grade in nested_list]))
second  = sorted(grades)[1]
print('\n'.join(sorted([name for name, grade in nested_list if grade == second ])))