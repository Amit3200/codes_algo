def printmax(n):
    if n<=6:
        return n
    mx=0
    for b in range(n-3,0,-1):
        cur=(n-b-1)*printmax(b)
        if curr>ma:
            ma=curr
    return ma



for _ in range(int(input())):
    z=int(input())
    print(printmax(z))
