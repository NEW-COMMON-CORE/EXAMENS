def whisper_cipher(text: str, shift: int) -> str:
    res = ""
    for c in text:
        if c.islower():
            res += chr((ord(c) - ord("a") + shift) % 26 + ord("a"))

        elif c.isupper():
            res += chr((ord(c) - ord("A") + shift) % 26 + ord("A"))

        else:
            res += c


    return res

print(whisper_cipher("abc", 23))
