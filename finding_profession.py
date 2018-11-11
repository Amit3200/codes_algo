def findprofession(l,pos):
    if l==1:
        return "e"
    if findprofession(l-1,(pos+1)//2)=="d":
        if pos%2==1:
            return "d"
        else:
            return "e"
    if pos%2==1:
        return "e"
    else:
        return "d"


for _ in range(int(input())):
    l,pos=map(int,input().split())
    if "e"==findprofession(l,pos):
        print("Engineer")
    else:
        print("Doctor")
