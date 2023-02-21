n = int(input())
while(n>0):
    q = int(input())
    x = list(map(int, input().split()))
    a = []
    p = 1
    f = 0
    for i in x:
        a.append(0)

    for i in range(len(x)):
        if(x[i]>len(x)):
            f = 1
            print('-1')
            break
        if(a[i]!=0):
            continue
        j = 0
        k = i
        while(j<x[i]):
            if(x[i]==1):
                a[k] = p
                break
            if(x[i]==x[k] and a[k]==0):
                a[k] = p
                j+=1
            elif(k == (len(x)-1)):
                f = 1
                break
            k+=1
        if(f==1):
            print("-1")
            break
        p+=1

    if(f==0):
        for i in range(q):
            if(i == q-1):
                print(a[i])
                break
            print(a[i],end=" ")
    n-=1
    
    