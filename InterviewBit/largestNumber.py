from functools import cmp_to_key

def compare(a,b):
    a = str(a)
    b = str(b)
    n1 = int(a+b)
    n2 = int(b+a)
    if(n1 > n2) :
        return 1
    elif n1 < n2:
        return -1
    else:
        return 0
    
    

class Solution:
    # @param A : tuple of integers
            # @return a strings
    def largestNumber(self, A):
        A = list(A)
        A.sort(key=cmp_to_key(compare),reverse=True)
        for i in range(len(A)):
            if(A[i]!= 0):
                break
        
        res = "".join(str(v) for v in A[i:])
        if int(res) == 0:
            res = "0"
            
        
        return res
        