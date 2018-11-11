def kfactor(n):
    for i in range(2,int(n**0.5)+1):
        while n%i==0:
            pick.append(i)
            n=n//i
    if n>1:
        pick.append(n)

for _ in range(int(input())):
    pick=[]
    n,k=map(int,input().split())
    kfactor(n)
    pick=sorted(list(pick))
    #print(pick)
    if len(pick)==0 or k>len(pick):
        print(-1)
    else:
        print(pick[k-1])
    
        
    
