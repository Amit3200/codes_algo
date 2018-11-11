for _ in range(int(input())):
    n=int(input())
    f=[]
    for i in range(n):
        l=list(map(int,input().split()))
        f.append(l)
    f.sort(key=lambda x:(x[0],-x[1],x[2]))
    for i in f:
        print(*i)
    
