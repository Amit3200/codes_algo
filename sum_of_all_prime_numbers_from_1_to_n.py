prime=[True for i in range(10**6+10)]
major=[]
def SOE(n):
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*2,n,p):
                prime[i]=False
        p+=1
    for i in range(2,n):
        if prime[i]:
            major.append(i)
SOE(10**6+5)
ans=[0 for i in range(10**6+10)]
j=2
f=0
for i in range(2,10**6+1):
    if prime[i]:
        f+=i
        ans[j]=f
    else:
        ans[j]=f
    j+=1
for _ in range(int(input())):
    z=int(input())
    print(ans[z])
    
                
