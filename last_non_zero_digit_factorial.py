dig=[1,1,2,6,4,2,2,4,2,8]
def last0dig(n):
    if n<10:
        return dig[n]
    if ((n//10)%10)%2==0:
        return (6*last0dig(n//5)*dig[n%10])%10
    else:
        return (4*last0dig(n//5)*dig[n%10])%10

for _ in range(int(input())):
    n=int(input())
    print(last0dig(n))
