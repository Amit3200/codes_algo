prime=[True for i in range(10**7+5)]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1

SOE(10**7+2)
for _ in range(int(input())):
    x=int(input())
    for i in range(x+1,x+1000):
        if prime[i] and str(i)==str(i)[::-1]:
            print(i)
            break
