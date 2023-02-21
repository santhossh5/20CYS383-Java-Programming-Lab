# cook your dish here

aa = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list(map(int,input().split()))
t = aa[0]
a = 0
b = 0
score = 0

for i in range(t):
    if(c[i]==1):
        a+=1
    else:
        b+=1
    if (type == 1):
        if (a > b):
            score = score + 1;
        else:
            a = 0;
            b = 0;
    else:
        if (a < b):
            score = score + 1;
        else:
            a = 0;
            b = 0;