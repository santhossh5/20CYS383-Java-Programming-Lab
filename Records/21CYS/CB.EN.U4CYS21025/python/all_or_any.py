def ispalin(n):
    for i in range(0,int(len(n)/2)):
        if(n[i]!=n[len(n)-i-1]):
            return False
    return True

#driver func

x = list(map(int, input().split()))
a=0
for i in range(0,len(x)):
    b = ispalin(str(x[i]))
    if(x[i] > 0):
        c = True
    else:
        c = False
    if(c==True and b==True):
        print("True")
        a=1
        break
if(a==0):
    print("False")
    
