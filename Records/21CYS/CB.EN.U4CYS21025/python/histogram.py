def occ(a,l):
    for i in range(len(l)):
        if(a==l[i]):
            return 0
    if(len(l)==0):
        return 1
    elif(l[-1]==a):
        return 0
    else:
        return 1
x = input()
l = [q for q in x]
f = []
final = {}
c = 0
for i in range(len(l)):
    a = l[i]
    if(occ(a,f)==1):
        for j in range(len(l)):
            if(a == l[j]):
                c+=1
        f.append(l[i])
        f.append(c)
        final.update({l[i]:c})
        c=0
print(final)

'''word=input()
histogram = {} 
for letter in word:
    if letter not in histogram:
        histogram[letter] = 1
    else:
        histogram[letter] += 1
print(histogram)'''