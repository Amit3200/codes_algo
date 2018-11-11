def isprime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True

def sumofKprime(n,k):
    if n<2*k:
        return False
    if k==1:
        return isprime(n)
    if k==2:
        if n%2==0:
            return True
        return isprime(n-2)
    if k>=3
        return True
for _ in range(int(input())):
    n,k=map(int,input().split())
    if sumofKprime(n,k):
        print("Yes")
    else:
        print("No")
        
