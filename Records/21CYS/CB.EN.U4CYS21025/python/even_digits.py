n=int(input())
f=0
while n!=0:
    a=n%10
    if a%2==0:
        f+=1
    n=n//10
print(f)