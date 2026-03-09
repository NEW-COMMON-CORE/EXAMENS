def sort_string(s: str) -> str:
    return ''.join(sorted(s, key=lambda char: (char.isdigit(), char.isupper(), char.islower()), reverse=True))


def count_vowels(word):
    return sum(1 for c in word.lower() if c in "aeiou")


def sort_string_by():
    words = ["Cat", "bat", "apple", "to", "Tea"]
    return sorted(words, key=lambda x: (len(x), x.lower(), count_vowels(x)))


print(sort_string_by())
# print(sort_string("aB3cA1!"))
