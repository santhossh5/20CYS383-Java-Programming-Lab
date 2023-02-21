n=int(input())
i=0
s=0
while n!=0:
    a=n%10
    s=s+(a*pow(2,i))
    i+=1
    n=n//10
print(s)