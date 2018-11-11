prime=[True for i in range(10**6+10)]
major=[]
def SOE(n):
    p=2
    while p*p<=n:
        for i in range(p*2,n,p):
            if prime[i]:
                prime[i]=False
        p+=1
SOE(10**6+5)
for _ in range(int(input())):
    z=int(input())
    f=0
    for i in range(2,z//2+1):
        if prime[i] and prime[z-i]:
            f=1
            break
    if f==1:
        print("Yes")
    else:
        print("No")
