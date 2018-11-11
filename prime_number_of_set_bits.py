def isprime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True


for _ in range(int(input())):
    l,r=map(int,input().split())
    c=0
    for z in range(l,r+1):
        f=bin(z)[2:]
        l=f.count('1')
        if isprime(l):
            c+=1
    print(c)
        
