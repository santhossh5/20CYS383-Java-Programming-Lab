x = list(map(int, input().split()))
sum = 1
for i in range(0,len(x)):
    sum = sum*x[i]
print(sum)
