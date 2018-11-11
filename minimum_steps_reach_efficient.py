def reach(d):
    d=abs(d)
    s=0
    k=0
    while s<d or ((s-d)%2)!=0:
        k+=1
        s+=k
    return k

for _ in range(int(input())):
    print(reach(int(input())))
