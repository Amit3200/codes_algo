prime=[True for i in range(10**4+5)]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1

SOE(10**4+2)
for _ in range(int(input())):
    x,y=map(int,input().split())
    z=x+y
    ans=0
    for i in range(z+1,z+100):
        if prime[i]:
            ans=i
            break
    print(abs(ans-z))
            
