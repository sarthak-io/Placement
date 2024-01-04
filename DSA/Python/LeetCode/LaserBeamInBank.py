def numberOfBeams(self,bank):
    ans = []
    res=0
    
    for row in bank:
        count_one = 0
        for digit in row:
            if digit == '1':
                count_one += 1
        if count_one != 0:
            ans.append(count_one)
    i=0
    while i<len(ans)-1:
        resi= ans[i]* ans[i+1]
        res= res+resi
        i+=1
    return res 
print(numberOfBeams(["011001", "000000", "010100", "001000"]))
