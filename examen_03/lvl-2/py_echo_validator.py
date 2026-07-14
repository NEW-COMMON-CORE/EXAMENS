def echo_validator(text: str) -> bool:
    if text == "":
        return False
    
    text2 = ""

    for c in text:
        if c.isalpha():
            text2 += c.lower()

    return text2 == text2[::-1]



print(echo_validator("racecar"))

