def isprime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
for _ in range(int(input())):
    z=int(input())
    if z<3:
        print("No")
    elif z%2==0:
        print("Yes")
    else:
        if isprime(z-2):
            print("Yes")
        else:
            print("No")
        
