x = input()
y = x.split()
s1 = 0
s2 = 0
for i in range(len(y[0])):
    s1 = s1 + ord(y[0][i])
for i in range(len(y[1])):
    s2 = s2 + ord(y[1][i])
if(s1==s2):
    print('TRUE')
else:
    print('FALSE')
