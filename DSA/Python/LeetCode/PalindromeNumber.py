class Solution(object):
    def isPalindrome(self, x):
        word = str(x)
        i = 0
        j = len(word) - 1

        while i <= j:
            if word[i] == word[j]:
                i += 1
                j -= 1
            else:
                return False

        return True