
def isValid(s: str) -> bool:
    ouvert = ['[', '{', '(']
    ferme = [']', '}', ')']
    thislist = []
    i = 0
    while i < len(s):
        if s[i] in ouvert:
            thislist.append(s[i])
        elif s[i] in ferme:
            if not thislist:
                return False
            t = thislist.pop()
            if s[i] == ')' and t != '(':
                return False
            if s[i] == '}' and t != '{':
                return False
            if s[i] == ']' and t != '[':
                return False
        i += 1
    return len(thislist) == 0


### Test #####
print(isValid("{[()]}"))
print(isValid("[{))}]"))
print(isValid("hello(ppp)[pappap]{kkkk}"))
