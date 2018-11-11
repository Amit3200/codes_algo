prime=[True for i in range(10**5+2)]
major=[]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]==True:
            for i in range(p*2,n+1,p):
                prime[i]=False
        p+=1
    for i in range(2,n):
        if prime[i]==True:
            major.append(i)

SOE(10**5)

for _ in range(int(input())):
    z=int(input())
    f=1
    for i in range(z):
        f*=major[i]
        #print(major[i])
    zu=f
    while True:
        if prime[zu]==True and zu!=f+1:
            print(zu-f)
            break
        zu+=1
