def local(s):
    sc = "!#$%^&*{}|~_+-=/'."
    
    if(len(s)<65):
        if(s[0]=='.' or s[len(s)-1]=='.'):
            return False
        for i in range(len(s)):
            if(s[i].isalnum()==False):
                if(sc.find(s[i])==-1):
                    return False
    else:
        return False
    return True

def domain(s):
    if(s.isdigit()==True or s[0]=='-' or s[len(s)-1]=='-'):
        return False
    if(s.isalnum()==False):
        if(s.find('-')==-1):
            return False
    return True

def ext(s):
    if(len(s)>3):
        return False
    if(s.isalnum()==False):
        return False
    return True

x = input()
a = x.split('@')
a[1] = a[1].split('.')
if(local(a[0])==True and domain(a[1][0]) and ext(a[1][1])):
    print("True")
else:
    print("False")
