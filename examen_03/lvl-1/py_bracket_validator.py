def bracket_validator(s: str) -> bool:
    stack = []
    paire = {")" : "(",
             "]" : "[",
             "}" : "{"}
    
    for char in s:
        if char in "([{":
            stack.append(char)
        elif char in "}])":
            if not stack or stack.pop() != paire[char]:
                return False
            
    return (len(stack) == 0)


print(bracket_validator("({[]})"))