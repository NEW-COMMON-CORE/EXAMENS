def cryptic_sorter(strings):
    return sorted(strings, key=lambda str: (len(str), str.lower(), sum(s in "aeiouAEIOU" for s in str)))


print(cryptic_sorter(["apple","cat","banana","dog","elephant"]))

