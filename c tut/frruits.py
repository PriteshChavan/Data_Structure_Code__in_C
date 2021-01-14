counts = dict()
fruits = ['apple', 'grapes', 'banana', 'papya']
for fruit in fruits:
    if fruit not in counts:
        counts[fruit] = 1
    else:
        counts[fruit] = counts[fruit] +1
print(counts)