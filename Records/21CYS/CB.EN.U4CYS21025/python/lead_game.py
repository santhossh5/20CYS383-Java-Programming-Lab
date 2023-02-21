n = int(input());
a = []
for i in range(n):
    x = list(map(int, input().split()))
    a.append(x)
lead = []
leader = []
for i in range(n):
    if(a[i][0]>a[i][1]):
        lead.append(a[i][0]-a[i][1])
        leader.append(1)
    else:
        lead.append(a[i][1]-a[i][0])
        leader.append(2)
maxm = max(lead)
print(leader[lead.index(maxm)],maxm)