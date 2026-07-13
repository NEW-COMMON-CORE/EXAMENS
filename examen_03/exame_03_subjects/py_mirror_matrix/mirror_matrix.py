from typing import List
def reverseMatrix(s: List[List[int]]) -> List[List[int]]:
    return [e[::-1] for e in s]
        
## Test ##
inpu = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print(reverseMatrix(inpu))