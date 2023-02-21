n = int(input())
while(n>0):
    a = int(input())
    x = list(map(int, input().split()))
    if(a%2 == 1):
        print('NO')
    else:
        x.sort()
        for i in range(0,a,2):
            if(x[i] != x[i+1]):
                break
        if(i!=(a-2)):
            print('NO')
        else:
            print('YES')
    n-=1