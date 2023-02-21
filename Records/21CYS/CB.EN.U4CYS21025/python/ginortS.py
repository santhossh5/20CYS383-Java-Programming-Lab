def conc(s):
    a = ""
    for i in range(len(s)):
        a+=str(s[i])
    return a

#main code
x = input()
C = []
s = []
o = []
e = []
for i in range(len(x)):
    if(x[i].isalpha() == True):
        if(x[i].isupper() == True):
            C.append(x[i])
        else:
            s.append(x[i])
    else:
        if(int(x[i])%2 == 0):
            e.append(int(x[i]))
        else:
            o.append(int(x[i]))
Cap = sorted(C)
sml = sorted(s)
odd = sorted(o)
eve = sorted(e)
str = conc(sml)+conc(Cap)+conc(odd)+conc(eve)
print(str)
