prime=[True for i in range(10**6+2)]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1

SOE(10**6)
for _ in range(int(input())):
    z=int(input())
    c=0
    f=1
    i=2
    while True:
        if prime[i]:
            f*=i
            c+=1
            if c==z:
                break
        i+=1
    print(f)
    
