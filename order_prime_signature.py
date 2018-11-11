prime=[True for i in range(10**3+2)]
exp=[]
def primefactor(n):
    p=2
    while p*p<=n:
        if prime[p]==True:
            for i in range(p*2,n+1,p):
                prime[i]=False
        p+=1
    #print(2)
    for i in range(2,n):
        if prime[i]:
            exp.append(i)
    #print(exp[:n+4])


d={}
sexp=[]
def salt(n):
    for  i in range(0,len(exp)):
        if n%exp[i]==0:
            k=0
            while n%exp[i]==0:
                n//=exp[i]
                k+=1
            d[exp[i]]=k
            sexp.append(k)
    sexp.sort()
    return sexp

def divisor(n):
    f=1
    sig=salt(n)
    for i in range(len(sig)):
        sig[i]+=1
        f*=sig[i]
    print(f)
primefactor(10**3)
n=int(input())
divisor(n)
    
    

        
