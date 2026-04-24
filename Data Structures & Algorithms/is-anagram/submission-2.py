class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False;
        contador = [0]*26
        for i in range(len(s)):
            contador[ord(s[i]) - ord("a")]+=1
            contador[ord(t[i]) - ord("a")]-=1
        for i in contador:
            if i!=0: return False;
        return True;