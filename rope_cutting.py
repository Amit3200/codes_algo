for _ in range(int(input())):
    n=int(input())
    l=sorted(list(map(int,input().split())))
    cl=l[0]
    k=[]
    si=0
    for i in range(1,n):
        if l[i]-cl>0:
            k.append(n-i)
            cl=l[i]
            si+=1
    if si==0:
        print(0)
    else:
        print(*k)
            
    
