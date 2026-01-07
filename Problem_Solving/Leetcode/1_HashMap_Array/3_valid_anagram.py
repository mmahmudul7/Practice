def isAnagram(self, s: str, t: str) -> bool:
    if len(s) != len(t):
        return False
    s1 = sorted(s)
    s2 = sorted(t)
    if s1 == s2:
        return True
    return False


##
from collections import Counter

def isAnagram(self, s: str, t: str) -> bool:
    if len(s) != len(t):
        return False
    return Counter(s) == Counter(t)