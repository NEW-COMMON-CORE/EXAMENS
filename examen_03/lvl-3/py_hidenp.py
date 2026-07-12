def hidenp(small: str, big: str) -> bool:
    i = 0
    for char in big:
        if i < len(small) and char == small[i]:
            i+=1

    return i == len(small)


# def hidenp(small: str, big: str) -> bool:
#     ite = iter(big)
#     return all(c in ite for c in small)



if __name__ == "__main__":
    print(hidenp("abc", "a1b2c3"))   # True
    print(hidenp("ace", "abcde"))    # True
    print(hidenp("aec", "abcde"))    # False
    print(hidenp("", "abc"))   # True
    print(hidenp("", ""))      # True