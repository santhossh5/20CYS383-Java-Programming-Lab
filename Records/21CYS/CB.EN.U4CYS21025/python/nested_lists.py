def Func(S):
  W = S
  for i in range(len(W)):
     
      # convert all the words into lowercase
      W[i]=W[i].lower() 
  S = sorted(W)
  return S

#main code
name = []
n = int(input())
for i in range(0,n):
    name.append([])
    name[i].append(input())
    name[i].append(input())
print(name)

for i in range(2):
    big = i
    for j in range(len(name)-1):
        if(float(name[big][1]) > float(name[j+1][1])):
            big = int(j+1)
    name[i][1], name[big][1] = name[big][1], name[i][1]
    name[i][0], name[big][0] = name[big][0], name[i][0]
mark = name[1][1]

w = []
w.append(name[1][0])
for i in range(2,len(name)):
  if(name[i][1]==mark):
    w.append(name[i][0])
s = Func(w)
for i in range(len(s)):
  print(s[i].capitalize())
