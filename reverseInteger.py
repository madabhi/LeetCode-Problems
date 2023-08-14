class Solution(object):
    def reverse(self, x):
        sum=0
        if x>=0:
            while x!=0:
                temp=x%10
                sum=sum*10+temp
                x=x//10
                print(sum)
        else:
            posi=abs(x)
            while posi!=0:
                temp=posi%10
                sum=sum*10+temp
                posi=posi//10
            sum=-abs(sum)
        if sum>2**31-1 or sum<(-2**31):
            return 0
        return sum



obj=Solution()
print(obj.reverse(123))