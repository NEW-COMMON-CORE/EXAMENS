def is_rotation(arr1: list, arr2: list) -> bool:

    if len(arr1) != len(arr2):
        return False

    if not arr1:
        return True

    n = len(arr1)

    for i in range(n):
        if (arr1[i:] + arr1[:i] == arr2):
            return True

    return  False    

 


print(is_rotation([1, 2, 3, 4, 5], [4, 5, 1, 2, 3]))
