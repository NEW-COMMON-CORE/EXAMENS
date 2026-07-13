def string_sculptor(text: str) -> str:
    string = []
    for c in text:
        string.append(c)

    result = ""
    count = 0
    for i in range(len(string)):
        if string[i].isalpha():
            if count % 2 != 0:
                result += string[i].upper()  
                
            else:
                result += string[i].lower()

            count += 1
        else:
            result += string[i]

    return result



print(string_sculptor("abc123def"))