import math
def phi(n):
    result=1
    for i in range(2,n):
        if math.gcd(i,n)==1:
            result+=1
    return result

for _ in range(int(input())):
    z=int(input())
    if phi(z)%2==0:
        print("YES",phi(z))
    else:
        print("NO")
