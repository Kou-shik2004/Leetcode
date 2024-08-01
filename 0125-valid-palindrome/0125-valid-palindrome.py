class Solution:
    def isPalindrome(self, s: str) -> bool:

        a=""
        for char in s:
            if(char.isalpha()):
                if(char.isupper()):
                    char=char.lower()
                a+=char
            if(char.isdigit()):
                a+=char
        return (a==a[::-1])