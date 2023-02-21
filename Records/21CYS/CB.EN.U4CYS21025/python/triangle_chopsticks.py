def istri(a,b,c):
    if((a+b)>c and (b+c)>a and (a+c)>b):
        return True
    return False

x = int(input())
while(x>0):
    l = list(map(int, input().split()))
    a = l[0]
    b = l[1]
    r = l[2]
    n = int(input())
    if(n>r):
        n=0
        l = list(map(int, input().split()))
        for i in range(len(l)):
            if(istri(a,b,l[i]) == True):
                n+=1
        print(n)
        if(n>r):
            print("Natsu")
        else:
            print("Grey")
            
    else:
        print("invalid input")
        break
    
    x-=1
