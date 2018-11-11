def fac(n):
    if n<=1:
        return 1
    else:
        return n*fac(n-1)
def ways(n):
    return fac(2*n)//(fac(n+1)*fac(n))


for _ in range(int(input())):
    z=int(input())
    if z&1:
        print(0)
    elif z==1:
        print(1)
    else:
        print(ways(z//2))
