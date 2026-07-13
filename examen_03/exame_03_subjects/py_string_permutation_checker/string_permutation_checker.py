def Anagram(s1: str, s2: str):
        if len(s1) != len(s2):
            return False
        return sorted(s1) == sorted(s2)

## Test ##
print(Anagram("racecar","carrace"))
print(Anagram("Conversation", "Voices rant on"))

