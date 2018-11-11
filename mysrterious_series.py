prime=[True for i in range(10**5+4)]
major=[]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]==True:
            for i in range(p*2,n,p):
                prime[i]=False
        p+=1
    for i in range(2,n):
        if prime[i]:
            major.append(i)

SOE(10**5)
major.insert(0,0)

for _ in range(int(input())):
    z=int(input())
    print(major[z]**2+1)
