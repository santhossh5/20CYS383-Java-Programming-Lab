x = input()
a = x.split()
png=bmp=jpeg=0
for i in range(len(a)):
    if(a[i].endswith(".png")==True):
        png+=1
    elif(a[i].endswith(".bmp")==True):
        bmp+=1
    elif(a[i].endswith(".jpeg")==True):
        jpeg+=1
print(png," ",bmp," ",jpeg)
