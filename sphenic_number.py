def pfactor(n):
    f=[]
    for i in range(2,int(n**0.5)+1):
        while n%i==0:
            f.append(i)
            n=n//i
    if n>1:
        f.append(n)
    return f



for _ in range(int(input())):
    n=int(input())
    x=list(pfactor(n))
    #print(x)
    if len(set(x))==3:
        print(1)
    else:
        print(0)
