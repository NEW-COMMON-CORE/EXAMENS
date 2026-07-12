def pattern_tracker(text: str) -> int:
    count = 0
    
    for i in range(len(text) - 1):
        if text[i].isdigit() and text[i + 1].isdigit():
            if int(text[i + 1]) == int(text[i]) + 1:
                count += 1

    return count

if __name__ == "__main__":
    print(pattern_tracker("123"))  # 2
    print(pattern_tracker("12a34"))  # 2
    print(pattern_tracker("1a2b3c4"))  # 0