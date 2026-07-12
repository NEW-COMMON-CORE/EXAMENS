def inter(s1: str, s2: str) -> str:
    res = ""
    for char in s1:
        if char not in res and char in s2:
            res += char    

    return res


if __name__ == "__main__":
    print(inter("hello", "world"))
    print(inter("abc", "xyz"))
    print(inter("", "abc"))