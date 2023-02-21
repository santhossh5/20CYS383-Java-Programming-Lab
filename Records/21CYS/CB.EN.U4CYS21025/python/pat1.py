n=int(input())
b=1
for i in range(1,n+1,2):
    a=i
    for j in range(1,i+1):
        print(a," ",end="")
        a+=i
    print("\r")
    if (i+1)<=n:
        for k in range(1,b+1):
            print("* + ",end="")
        b+=1
        print("\r")