prime=[True for i in range(10**4+10)]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1

SOE(10**3+4)
for _ in range(int(input())):
    n=input()
    f=len(n)
    d=[]
    fl=0
    for _ in range(len(n)):
        z=n[-1]+n[:f-1]
        if prime[int(z)]:
            fl=1
            break
    if fl==1:
        print("Yes")
    else:
        print("No")

