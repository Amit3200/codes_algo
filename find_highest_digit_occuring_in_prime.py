from collections import Counter
prime=[True for i in range(10**6+5)]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1
SOE(10**6+2)
for _ in range(int(input())):
    a,b=map(int,input().split())
    s=""
    for i in range(a,b+1):
        if prime[i] and i<b+1:
            s+=str(i)
    z=dict(Counter(s))
    z={int(k):int(v) for k,v in z.items()}
    if len(z.keys())==0:
        print(-1)
    else:
        print(max(z.items(),key=lambda x:(x[1],x[0]))[0])
    
            
    
    
