prime=[True for i in range(10**6+10)]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1

SOE(10**6+5)
for _ in range(int(input())):
    z=int(input())
    j=z
    i=z
    while True:
        if prime[i] or prime[j]:
            if prime[j]:
                print(j)
                break
            if prime[i]:
                print(i)
                break
        j-=1
        i+=1
    
        
