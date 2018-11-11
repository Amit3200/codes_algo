prime=[True for i in range(10**6+5)]
major=[]

def isprime(x):
    if x<2:
        return False
    for i in range(2,int(x**0.5)+1):
        if x%i==0:
            return False
    return True

def checkcongo(x):
    for i in range(2,(x//2)+1):
        if isprime(i) and isprime(x-i):
            return [i,x-i]


for _ in range(int(input())):
    z=int(input())
    if z<=7:
        print("-1")
    elif z%2==0:
        io=z-4
        d=checkcongo(io)
        print(2,2,d[0],d[1])
    else:
        io=z-5
        d=checkcongo(io)
        print(2,3,d[0],d[1])
