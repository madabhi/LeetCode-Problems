class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        l1=[]
        for a in digits:
            l1.append(int(a))
        print(l1)
        dict={2:"abc",3:"def",4:"ghi",5:"jkl",6:"mno",7:"pqrs",8:"tuv",9:"wxyz"}
        if len(digits)==0:
            return ""
        elif len(digits)==1:
            list=[f"{i}" for i in dict[l1[0]] ]
            return list

        elif len(digits)==2:
            list=[f"{i}{j}" for i in dict[l1[0]] for j in dict[l1[1]]]
            return list
        elif len(digits)==3:
            list=[f"{i}{j}{k}" for i in dict[l1[0]] for j in dict[l1[1]] for k in dict[l1[2]]]
            return list

        elif len(digits)==4:
            list=[f"{i}{j}{k}{m}" for i in dict[l1[0]] for j in dict[l1[1]] for k in dict[l1[2]] for m in dict[l1[3]] ]
            return list
            
        
        

obj=Solution()
print(obj.letterCombinations("5678"))
