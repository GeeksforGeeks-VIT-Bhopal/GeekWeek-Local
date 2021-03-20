class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if len(num1)==1 or len(num2)==1:
            return str(int(num1)int(num2))
        m=max(len(num1),len(num2))
        m2=m//2

        num1=int(num1)
        num2=int(num2)
        a=num1//10m2
        b=num1%10m2
        c=num2//10m2
        d=num2%10m2

        z0=self.multiply(str(b),str(c))
        z1=self.multiply(str(a+b),str(c+d))-ac-b*d
        z2=self.multiply(str(a), str(c))

        return (z2 * 10(2*m2)) + ((z1 - z2 - z0) * 10(m2)) + (z0)
