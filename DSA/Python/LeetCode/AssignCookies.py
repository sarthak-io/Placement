class Solution(object):
    def findContentChildren(self, g, s):
        g.sort()
        s.sort()

        no_child = len(g)
        no_cookies = len(s)
        ans = 0

        child_index = 0
        cookie_index = 0

        while child_index < no_child and cookie_index < no_cookies:
            if s[cookie_index] >= g[child_index]:
                ans += 1
                child_index += 1  # Move to the next child
            cookie_index += 1  # Move to the next cookie

        return ans
