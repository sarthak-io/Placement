from collections import Counter
def minOperations(self, nums):
        res=0
        counts = Counter(nums)
        for i in (list(counts.values())):
            if i ==1:
                return -1
            if(i%3==0):
                count= i//3
                res= res+count
            else:
                count= i//3+1
                res= res+count
        return res
print(minOperations([20,20,20,20,19])) 