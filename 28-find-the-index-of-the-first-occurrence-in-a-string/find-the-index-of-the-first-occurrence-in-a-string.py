class Solution(object):
    def strStr(self, haystack, needle):
        pos=-1
        if(needle in haystack):
            pos=haystack.index(needle)
        return pos    
        